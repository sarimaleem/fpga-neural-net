`include "global_params.vh"

module sum_pixels(input wire [HEIGHT-1:0][LENGTH-1:0] image, output reg [31:0] sum, output reg [31:0] sum_left) ;

genvar i, j;
generate
    for (i = 0; i < HEIGHT; i = i + 1) begin
        for (j = 0; j < LENGTH; j = j + 1) begin
            always @(*) begin
                sum = sum + image[i][j];
            end
        end
    end
endgenerate

genvar n, m;
generate
    for (n = 0; n < HEIGHT; n = n + 1) begin
        for (m = 0; m < LENGTH; m = m + 1) begin
            always @(*) begin
                sum_left = sum_left + image[n][m];
            end
        end
    end
endgenerate

endmodule