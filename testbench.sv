module testbench;
    // Instantiate neuralnet
    reg [7:0] gpio_pin;
    reg pi_clk = 0;
    reg rst = 1;
    reg write_enable = 0;
    wire [5:0] LED;
    integer i, file, r;

    neuralnet dut (
        .gpio_pin(gpio_pin),
        .pi_clk(pi_clk),
        .rst(rst),
        .write_enable(write_enable),
        .LED(LED)
    );

    initial begin
        // Open the binary file for reading
        file = $fopen("./hsvtest/output_bytes.bin", "rb");
        if (file == 0) begin
            $display("Failed to open file.");
            $finish;
        end

        // Initialize the neuralnet
        rst = 1;
        #10; // Assert reset for a few clock cycles
        rst = 0;

        // Read bytes from file and write to neuralnet
        for (i = 0; i < 1800; i++) begin
            r = $fgetc(file);
            gpio_pin = r[7:0];
            write_enable = 1;
            #10; // Simulate write clock cycle
            write_enable = 0;
            #10; // Wait cycle before next write
        end

        // Close the file
        $fclose(file);
        
        $display("Simulation complete. Final LED output: %b", LED);
        $finish;
    end

    // Generate clock
    always #5 pi_clk = !pi_clk; // 100 MHz clock
endmodule

module neuralnet (
    input wire [7:0] gpio_pin,
    input wire pi_clk,
    input wire rst,
    input wire write_enable,
    output reg [5:0] LED
);

    parameter int HEIGHT = 20, WIDTH = 30, DEPTH = 3;
    reg [7:0] image [HEIGHT-1:0][WIDTH-1:0][DEPTH-1:0];
    reg [31:0] h = 0, w = 0, d = 0, count = 0;

    always @(posedge pi_clk or posedge rst) begin
        if (rst) begin
            count = 0; h = 0; w = 0; d = 0;
            for (int height = 0; height < HEIGHT; height++) begin
                for (int width = 0; width < WIDTH; width++) begin
                    for (int depth = 0; depth < DEPTH; depth++) begin
                        image[height][width][depth] = 8'd0;
                    end
                end
            end
        end else if (write_enable && count < HEIGHT*WIDTH*DEPTH) begin
            image[h][w][d] = gpio_pin;
            count = count + 1;
            d = d + 1;
            if (d == DEPTH) begin
                d = 0;
                w = w + 1;
                if (w == WIDTH) begin
                    w = 0;
                    h = h + 1;
                end
            end
        end
    end

    // Example to display some output on the LEDs
    assign LED = image[0][0][0][5:0];

endmodule
