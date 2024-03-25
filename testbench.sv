`timescale 1ns / 1ps

module matrix_dot_product_tb;

// Testbench parameters
parameter m1 = 2;
parameter n1 = 2;
parameter m2 = 2;
parameter n2 = 2;

// Testbench variables
reg clk, reset, enable;
reg [31:0] matrix_a[m1*n1-1:0];
reg [31:0] matrix_b[m2*n2-1:0];
wire [31:0] result_matrix[m1*n2-1:0];
real fp_value;

// Instantiate the module under test
matrix_dot_product #(.m1(m1), .n1(n1), .m2(m2), .n2(n2)) uut (
    .clk(clk),
    .reset(reset),
    .enable(enable),
    .matrix_a(matrix_a),
    .matrix_b(matrix_b),
    .result_matrix(result_matrix)
);

always #5 clk = ~clk;

// Test sequence
initial begin
    // Initialize testbench variables
    clk = 0;
    reset = 1;
    enable = 0;
    #10;

    reset = 0;
    enable = 1;
    #10;

    matrix_a[0] = 32'h000000001;  // 1.0
    matrix_a[1] = 32'h000000002;  // 2.0
    matrix_a[2] = 32'h000000001;  // 3.0
    matrix_a[3] = 32'h000000001;  // 4.0

    matrix_b[0] = 32'h000000001;  // 1.0
    matrix_b[1] = 32'h000000001;  // 2.0
    matrix_b[2] = 32'h000000001;  // 3.0
    matrix_b[3] = 32'h000000001;  // 4.0

    #100;

    $display("Result matrix:");
    for (int i = 0; i < m1*n2; i++) begin
        // fp_value = $bitstoshortreal(result_matrix[i]);  // Convert the 32-bit binary to real
        $display("result_matrix[%0d] = %h", i, result_matrix[i]);
    end

    // Finish the simulation
    $finish;
end

endmodule
