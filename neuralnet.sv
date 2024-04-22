module neuralnet (
    input wire [7:0] gpio_pin, // GPIO pin input
    input wire pi_clk, // Raspberry Pi clock
    input wire rst_n, // Active low reset
    input wire write_enable, // Enable writing to memory
    input wire [1:0] buttons, // Button inputs to select memory
    output wire [5:0] LED // LED output
);
    // Memory to store bytes from GPIO
    reg [7:0] bytes[0:3];
    reg [1:0] count = 2'b00; // 4 possible places you can write, initialized to 0

    always @(posedge pi_clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset count and bytes
            count <= 2'b00;
            bytes[0] <= 8'd0;
            bytes[1] <= 8'd0;
            bytes[2] <= 8'd0;
            bytes[3] <= 8'd0;
        end else if (write_enable) begin
            if (count < 3) begin
                bytes[count] <= gpio_pin;
                count <= count + 1;
            end else if (count == 3) begin
                bytes[count] <= gpio_pin;
                // Optionally reset or stop incrementing count to avoid overflow
                count <= 0; // Wrap around or handle as required
            end
        end
    end

    // Connect the selected byte's lower 6 bits to the LEDs
    assign LED = bytes[buttons][5:0];
endmodule
