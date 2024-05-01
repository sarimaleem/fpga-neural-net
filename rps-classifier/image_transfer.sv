`include "common.svh"

module image_transfer (
    input wire fpga_clk, // fpga clk, runs 50 mhz I think
    input wire pi_clk, // Raspberry Pi clock
    input wire data_in, // GPIO pin input, one bit
    input wire rst // Active high reset
);

    // Image wires
    logic [LENGTH-1:0][WIDTH-1:0] filtered_image;
    logic [4:0] row_index;
    logic [4:0] col_index;
    logic image_ready;
    logic [23:0] hsv_buffer;
    logic [4:0] bit_cnt;


    logic slow_clk;
    
    // Debounce wires
    logic dbnc_bit;
    logic dbnc_rst;
    logic dbnc_pi_clk;

    classifier classifier (dbnc_rst, image_ready, filtered_image);
    
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
        end
        else begin
            if (bit_cnt < 23) begin
                hsv_buffer[bit_cnt] = dbnc_bit;
                bit_cnt++;
            end else begin
                // Store the last bit in the LSB, complete the byte and store it
                hsv_buffer[bit_cnt] = dbnc_bit;

                if (row_index < LENGTH && col_index < WIDTH) begin
                    filtered_image[row_index][col_index] = is_hand_bit(hsv_buffer);

                    // $write("%b ", is_hand_bit(hsv_buffer));
                    
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
                // Image is ready once we read in all data
                image_ready = row_index == LENGTH;
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
