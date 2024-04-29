module neuralnet (
    input wire [7:0] gpio_pin, // GPIO pin input
    input wire pi_clk, // Raspberry Pi clock
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

    logic [31:0] h;
    logic [31:0] w;
    logic [31:0] d;

    initial begin
        count = 0;
        h = 0;
        w = 0;
        d = 0;
    end

    always @(posedge pi_clk or posedge rst) begin
        if (rst) begin
            // Reset the count and clear the image storage
            count = 0;
            h = 0;
            w = 0;
            d = 0;
            for (int i = 0; i < HEIGHT * WIDTH * DEPTH; i++) begin
                image[i] = 8'd2;
            end
            // for (int height = 0; height < HEIGHT; height++) begin
            //     for (int width = 0; width < WIDTH; width++) begin
            //         for (int depth = 0; depth < DEPTH; depth++) begin
            //             image[height][width][depth] = 8'd0;
            //         end
            //     end
            // end
        end 
        else if (write_enable && count < HEIGHT*WIDTH*DEPTH) begin
            // Calculate indices based on the count
            d = d + 1;
            if (d == DEPTH) begin
                d = 0;
                w = w + 1;
            end
            if (w == WIDTH) begin
                w = 0;
                h = h + 1;
            end
            image[count] = gpio_pin;
            count = count + 1;
        end
    end

    assign LED = image[10][5:0];
    // assign LED = 6'b101010;

endmodule
