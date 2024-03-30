module matrix_dot_product #(
    parameter m1 = 2,
    parameter n1 = 2,
    parameter m2 = 2,
    parameter n2 = 2
)(
    input logic clk,
    input real matrix_a[m1*n1-1:0],
    input real matrix_b[m2*n2-1:0],
    output real result_matrix[m1*n2-1:0]
);

    integer i, j, k;
    real sum;
    real product;

    always @(posedge clk) begin
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
        for (int i = 0; i < m1*n2; i++) begin
            $display("result_matrix[%0d] = %f", i, result_matrix[i]);
        end
    end
endmodule
