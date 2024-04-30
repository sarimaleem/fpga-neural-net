module neuralnet (
    input wire fpga_clk, // fpga clk, runs 50 mhz I think
    input wire pi_clk, // Raspberry Pi clock
    input wire data_in, // GPIO pin input, one bit
    input wire rst, // Active high reset
    input wire write_enable, // Enable writing to memory
    input wire [3:0] switches, // Button inputs to select memory region
    output logic [5:0] LED // LED output
);

    parameter int HEIGHT = 20;
    parameter int WIDTH = 30;
    parameter int DEPTH = 3; // Depth of 3 for RGB color channels
    parameter int BITS = 8;

    logic [7:0] image [HEIGHT * WIDTH * DEPTH]; // 3D array to store image data
    logic [31:0] count;
    logic slow_clk;
    
    // dbnc stuff
    logic dbnc_bit;
    logic dbnc_rst;
    logic dbnc_write_enable;
    logic dbnc_pi_clk;

    logic [7:0] bit_buffer;
    logic [31:0] bit_cnt;

    initial begin
        slow_clk = 0;
        count = 0;
        dbnc_bit = 0;
        dbnc_rst = 0;
        dbnc_write_enable = 0;
        bit_cnt = 0;
        bit_buffer = 0;
    end

    slow_down_clock slow(fpga_clk, slow_clk);
    
    always @(posedge slow_clk) begin
        dbnc_bit = data_in;
        dbnc_rst = rst;
        dbnc_write_enable = write_enable;
        dbnc_pi_clk = pi_clk;
    end

    always @(posedge dbnc_pi_clk or posedge dbnc_rst) begin
        if (dbnc_rst) begin
            count = 0;
            bit_buffer = 0;
            bit_cnt = 0;
            for (int i = 0; i < HEIGHT * WIDTH * DEPTH; i++) begin
                image[i] = 8'd0;
            end
        end else if (dbnc_write_enable) begin
            if (bit_cnt < 7) begin
                // Shift bit into buffer from the MSB to the LSB
                bit_buffer[7 - bit_cnt] = dbnc_bit;  // Adjust index for MSB first
                bit_cnt = bit_cnt + 1;
            end else begin
                // Store the last bit in the LSB, complete the byte and store it
                bit_buffer[7 - bit_cnt] = dbnc_bit;
                if (count < HEIGHT*WIDTH*DEPTH) begin
                    image[count] = bit_buffer;
                    count = count + 1;
                end
                // Reset buffer and bit counter
                bit_buffer = 0;
                bit_cnt = 0;
            end
        end
    end

    // assign LED[3:0] = switches;

    always_comb begin
        case (switches) 
            0: begin
                LED[5:0] = image[0][5:0];
            end
            1: begin
                LED[5:0] = image[1][5:0];
            end
            2: begin
                LED[5:0] = image[2][5:0];
            end
            3: begin
                LED[5:0] = image[3][5:0];
            end
            4: begin
                LED[5:0] = image[100][5:0];
            end
            5: begin
                LED[5:0] = image[300][5:0];
            end
            6: begin
                LED[5:0] = image[400][5:0];
            end
            7: begin
                LED[5:0] = image[500][5:0];
            end
            8: begin
                LED[5:0] = image[600][5:0];
            end
            9: begin
                LED[5:0] = image[700][5:0];
            end
            10: begin
                LED[5:0] = image[800][5:0];
            end
            11: begin
                LED[5:0] = image[900][5:0];
            end
            12: begin
                LED[5:0] = image[1000][5:0];
            end
            13: begin
                LED[5:0] = image[1798][5:0];
            end
            14: begin
                LED[5:0] = image[1799][5:0];
            end
            15: begin
                LED[5:0] = image[1799][5:0];
            end
            default begin
                LED[5:0] = 0;
            end
        endcase
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
        if(counter == 1000) begin
            clk = ~clk;
            counter = 0;
        end
    end

    assign slow_clk = clk;
endmodule

module classifier (
    input logic clk,
    input logic init_in,
    input logic [LENGTH-1:0][WIDTH-1:0] image
);

    parameter LENGTH = 20;
    parameter WIDTH = 30;

    parameter SHIFT = LENGTH / 10;
    parameter LEFT = LENGTH * 4 / 10;

    parameter LOWER_GREEN_ONE = 18;
    parameter LOWER_GREEN_TWO = 25;
    parameter LOWER_GREEN_THREE = 25;

    parameter UPPER_GREEN_ONE = 43;
    parameter UPPER_GREEN_TWO = 255;
    parameter UPPER_GREEN_THREE = 255;


    logic [31:0] sum;
    logic [31:0] sum_left;
    logic [4:0] leftmost_pixel;
    logic [4:0] num_transitions;
    logic [1:0] result;

    initial begin
        sum = 0;
        sum_left = 0;
        leftmost_pixel = 5'b11111;
        num_transitions = 0;
    end

    always @(init_in) begin
        if (init_in) begin
            // Compute total pixels
            for (int i = 0; i < LENGTH; i++) begin
                for (int j = 0; j < WIDTH; j++) begin
                    sum += {{31{1'b0}}, init_in & image[i][j]};
                end
            end

            // Compute total left pixels
            for (int i = 0; i < LENGTH; i++) begin
                for (int j = 0; j < LEFT; j++) begin
                    sum += {{31{1'b0}}, init_in & image[i][j]};
                end
            end

            // Compute leftmost pixel
            for (int i = 0; i < LENGTH; i++) begin
                for (int j = 0; j < WIDTH; j++) begin
                    if (init_in && j < leftmost_pixel && image[i][j]) begin
                        leftmost_pixel = j[4:0];
                    end
                end
            end

            // Compute number of transitions
            for (int i = 0; i < LENGTH - 2; i++) begin
                if (image[i][leftmost_pixel] != image[i][leftmost_pixel + SHIFT]) begin
                    num_transitions++;
                end
            end

            result = num_transitions == 4 ? 2'b10 : (sum_left > 1200 ? 2'b01 : 2'b00);
        end
    end
endmodule

// logic [31:0] h;
// logic [31:0] w;
// logic [31:0] d;

// Calculate indices based on the count
// d = d + 1;
// if (d == DEPTH) begin
//     d = 0;
//     w = w + 1;
// end
// if (w == WIDTH) begin
//     w = 0;
//     h = h + 1;
// end

// for (int height = 0; height < HEIGHT; height++) begin
//     for (int width = 0; width < WIDTH; width++) begin
//         for (int depth = 0; depth < DEPTH; depth++) begin
//             image[height][width][depth] = 8'd0;
//         end
//     end
// end
