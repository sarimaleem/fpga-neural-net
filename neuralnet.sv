module neuralnet (
    input wire fpga_clk, // fpga clk, runs 50 mhz I think
    input wire pi_clk, // Raspberry Pi clock
    input wire [7:0] byte_input, // GPIO pin input
    input wire rst, // Active high reset
    input wire write_enable, // Enable writing to memory
    input wire [1:0] buttons, // Button inputs to select memory region
    output logic [5:0] LED // LED output
);

    parameter int HEIGHT = 20;
    parameter int WIDTH = 30;
    parameter int DEPTH = 3; // Depth of 3 for RGB color channels

    logic [7:0] image [HEIGHT * WIDTH * DEPTH]; // 3D array to store image data
    logic [31:0] count;
    logic [31:0] rst_cnt;

    logic slow_clk;

    // dbnc stuff
    logic [7:0] dbnc_byte;
    logic dbnc_rst;
    logic dbnc_write_enable;
    logic dbnc_pi_clk;

    initial begin
        slow_clk = 0;
        count = 0;
        rst_cnt = 0;
        LED = 0;
        dbnc_byte = 0;
        dbnc_rst = 0;
        dbnc_write_enable = 0;
        rst_cnt = 0;
    end

    slow_down_clock slow(fpga_clk, slow_clk);
    
    always @(posedge slow_clk) begin
        dbnc_byte = byte_input;
        dbnc_rst = rst;
        dbnc_write_enable = write_enable;
        dbnc_pi_clk = pi_clk;
    end

    always @(posedge dbnc_pi_clk or posedge dbnc_rst) begin
        if (dbnc_rst) begin
            // Reset the count and clear the image storage
            count = 0;
            rst_cnt = rst_cnt + 1;
            for (int i = 0; i < HEIGHT * WIDTH * DEPTH; i++) begin
                image[i] = 8'd0;
            end
        end 
        else if (dbnc_write_enable && count < HEIGHT*WIDTH*DEPTH) begin
            image[count] = dbnc_byte;
            count = count + 1;
        end
    end

    // assign LED = image[10][5:0];
    // assign LED[0] = slow_clk;
    // assign LED = 6'b101010;
    assign LED = rst_cnt[5:0];
endmodule


module slow_down_clock(input fpga_clk, output slow_clk);
    logic [31:0] counter;
    logic clk;

    initial begin
        clk = 0;
    end
    
    always @(posedge fpga_clk) begin 
        counter++;
        if(counter == 10000) begin
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
