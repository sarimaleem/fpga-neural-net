`timescale 1ns / 1ps

module testbench();

// Testbench parameters
parameter m1 = 2;
parameter n1 = 2;
parameter m2 = 2;
parameter n2 = 2;

// Testbench variables
logic clk;
real matrix_a[m1*n1-1:0];
real matrix_b[m2*n2-1:0];
real result_matrix[m1*n2-1:0];

// Instantiate the module under test
matrix_dot_product #(.m1(m1), .n1(n1), .m2(m2), .n2(n2)) uut (
    .clk(clk),
    .matrix_a(matrix_a),
    .matrix_b(matrix_b),
    .result_matrix(result_matrix)
);


initial clk = 0;
always #5 clk = ~clk;

initial begin
    $dumpfile("testbench.vcd");
    $dumpvars(0, testbench);

    #10;

    matrix_a[0] = 1.0;
    matrix_a[1] = 2.0;
    matrix_a[2] = 3.0;
    matrix_a[3] = 4.0;

    matrix_b[0] = 1.0;
    matrix_b[1] = 2.0;
    matrix_b[2] = 3.0;
    matrix_b[3] = 4.0;

    #10;

    $display("\nTEST BENCH OUTPUT");
    for (int i = 0; i < m1*n2; i++) begin
        $display("result_matrix[%0d] = %f", i, result_matrix[i]);
    end

    // Finish the simulation
    $finish;
end
endmodule
