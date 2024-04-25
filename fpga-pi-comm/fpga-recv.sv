module fpga_recv (
    input wire [7:0] gpio_pin, // GPIO pin input
    input wire pi_clk, // Raspberry Pi clock
    input wire rst_n, // Active low reset
    input wire write_enable, // Enable writing to memory
    input wire [1:0] buttons, // Button inputs to select memory
    output logic [5:0] LED // LED output
);
    // Memory to store bytes from GPIO
    logic [7:0] bytes [3:0];
    logic [3:0] count; // 4 possible places you can write, initialized to 0

    initial begin
        count = 0;
    end

    assign LED = bytes[buttons][5:0];

    always @(posedge pi_clk or posedge rst_n) begin
        if (rst_n) begin
            // Reset count and bytes
            count <= 2'b00;
            bytes[0] <= 8'd0;
            bytes[1] <= 8'd0;
            bytes[2] <= 8'd0;
            bytes[3] <= 8'd0;
        end 
        else if (write_enable && count < 4) begin
            bytes[count] <= gpio_pin;
            count <= count + 1;
        end
    end

endmodule
