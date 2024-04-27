module neuralnet (
    input wire [7:0] gpio_pin, // GPIO pin input
    input wire pi_clk, // Raspberry Pi clock
    input wire rst, // Active high reset
    input wire write_enable, // Enable writing to memory
    input wire [1:0] buttons, // Button inputs to select memory region
    output logic [5:0] LED // LED output
);

    parameter int LENGTH = 28;
    parameter int WIDTH = 28;

    logic [7:0] bytes [LENGTH*WIDTH - 1:0];
    signed logic [7:0] weights [50:0];
    logic [31:0] count;

    initial begin
        count = 0;
    end


    always @(posedge pi_clk or posedge rst) begin
        if (rst) begin
            // Reset the count and byte storage
            count = 0;
            for (int i = 0; i < LENGTH*WIDTH; i++) begin
                bytes[i] = 8'd0;
            end
        end 
        else if (write_enable && count < LENGTH*WIDTH) begin
            bytes[count] = gpio_pin;
            count = count + 1;
        end
    end

    // assign LED = 5'b10101;
    assign LED = bytes[155][5:0];
endmodule
