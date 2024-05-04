`include "common.svh"

module neuralnet (
    input wire fpga_clk, // fpga clk, runs 50 mhz I think
    input wire pi_clk, // Raspberry Pi clock
    input wire data_in, // GPIO pin input, one bit
    input wire rst, // Active high reset
    output logic [2:0] breadboard,
    output logic [5:0] LED
);

    // Image wires
    logic [LENGTH-1:0][WIDTH-1:0] filtered_image;
    logic [3:0] row_index;
    logic [3:0] col_index;
    logic image_ready;
    logic [23:0] hsv_buffer;
    logic [4:0] bit_cnt;

    logic slow_clk;

    logic [1:0] result;
    logic result_ready;
    
    // Debounce wires
    logic dbnc_bit;
    logic dbnc_rst;
    logic dbnc_pi_clk;

    initial begin
        filtered_image = 0;
        row_index = 0;
        col_index = 0;
        image_ready = 0;
        hsv_buffer = 0;
        bit_cnt = 0;

        slow_clk = 0;

        dbnc_bit = 0;
        dbnc_rst = 0;
        bit_cnt = 0;
        hsv_buffer = 0;

        result_ready = 0;

        breadboard = 3'b111;
    end

    slow_down_clock slow(fpga_clk, slow_clk);
    
    always @(posedge slow_clk) begin
        dbnc_bit = data_in;
        dbnc_rst = rst;
        dbnc_pi_clk = pi_clk;
    end

    always @(posedge dbnc_pi_clk or posedge dbnc_rst) begin
        if (dbnc_rst) begin
            filtered_image = 0;
            row_index = 0;
            col_index = 0;
            image_ready = 0;
            hsv_buffer = 0;
            bit_cnt = 0;
            filtered_image = 0;

            breadboard = 3'b111;

            LED = 0;
        end
        else begin
            if (bit_cnt < 23) begin
                hsv_buffer[bit_cnt] = dbnc_bit;
                bit_cnt++;
            end 
            else begin
                // Store the last bit in the LSB, complete the byte and store it
                hsv_buffer[bit_cnt] = dbnc_bit;

                if (row_index < LENGTH && col_index < WIDTH) begin
                    filtered_image[row_index][col_index] = is_hand_bit(hsv_buffer);

                    if (col_index == WIDTH - 1) begin
                        row_index++;
                        col_index = 0;
                    end
                    else begin
                        col_index++;
                    end
                end

                // Reset buffer and bit counter
                hsv_buffer = 0;
                bit_cnt = 0;

                if (row_index == LENGTH) begin
                    casez (classify(filtered_image))
                        2'b00: begin
                            $display("result: ROCK!");
                            LED[2:0] = 3'b001;
                            breadboard = 3'b110;
                        end
                        2'b01: begin
                            $display("result: PAPER!");
                            LED[2:0] = 3'b010;
                            breadboard = 3'b101;
                        end
                        2'b10: begin
                            $display("result: SCISSORS!");
                            LED[2:0] = 3'b100;
                            breadboard = 3'b011;
                        end
                        default: breadboard = 3'b000;
                    endcase
                end
            end
        end
    end
endmodule

module slow_down_clock(input fpga_clk, output slow_clk);
    logic [31:0] counter;
    logic clk;

    initial begin
        clk = 0;
    end
    
    always @(posedge fpga_clk) begin
        counter++;
        if (counter == 1000) begin
            clk = ~clk;
            counter = 0;
        end
    end

    assign slow_clk = clk;
endmodule

function automatic logic [1:0] classify(
    input logic [LENGTH-1:0][WIDTH-1:0] image
);
    logic [31:0] sum = 0;
    logic [31:0] sum_left = 0;
    logic [4:0] leftmost_pixel = 5'b11111;
    logic [4:0] num_transitions = 0;

    // Compute total left pixels
    for (int i = 0; i < LENGTH; i++) begin
        for (int j = 0; j < LEFT; j++) begin
            sum_left += {{31{1'b0}}, image[i][j]};
        end
    end

    // Compute leftmost pixel
    for (int i = 0; i < LENGTH; i++) begin
        for (int j = 0; j < WIDTH; j++) begin
            if (j < leftmost_pixel && image[i][j]) begin
                leftmost_pixel = j[4:0];
            end
        end
    end

    // Compute number of transitions
    for (int i = 2; i < LENGTH - 1; i++) begin
        if (image[i][leftmost_pixel + SHIFT] != image[i + 1][leftmost_pixel + SHIFT]) begin
            num_transitions++;
        end
    end

    return num_transitions == 4 ? 2'b10 : (sum_left > LENGTH * WIDTH / 50 ? 2'b01 : 2'b00);
endfunction

function automatic logic [7:0] hue(input logic [23:0] hsv);
    return hsv[7:0];
endfunction

function automatic logic [7:0] saturation(input logic [23:0] hsv);
    return hsv[15:8];
endfunction

function automatic logic [7:0] value(input logic [23:0] hsv);
    return hsv[23:16];
endfunction

function automatic logic is_hand_bit (input logic [23:0] hsv);
    return ~(hue(hsv) >= MIN_HUE && hue(hsv) <= MAX_HUE &&
        saturation(hsv) >= MIN_SATURATION && value(hsv) >= MIN_VALUE);
endfunction
