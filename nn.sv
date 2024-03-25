module matrix_dot_product #(
    parameter m1 = 2,
    parameter n1 = 2,
    parameter m2 = 2,
    parameter n2 = 2
)(
    input wire clk,
    input wire reset,
    input wire enable,
    input wire [31:0] matrix_a[m1*n1-1:0],
    input wire [31:0] matrix_b[m2*n2-1:0],
    output reg [31:0] result_matrix[m1*n2-1:0]
);
    // precondition n1 == m2

    integer i, j, k;
    reg [31:0] sum;
    reg [31:0] product;

    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < m1*n2; i++) begin
                result_matrix[i] <= 0;
            end
        end
        else if (enable) begin
            for (i = 0; i < m1; i++) begin
                for (j = 0; j < n2; j++) begin
                    sum = 0;
                    for (k = 0; k < n1; k++) begin
                        product = matrix_a[i*n1+k] * matrix_b[k*n2+j];
                        sum = sum + product;
                    end
                    result_matrix[i*n2+j] = sum;
                end
            end
        end
    end

endmodule
