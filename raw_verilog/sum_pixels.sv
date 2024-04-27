module sum_pixels(input wire [199:0][299:0] image, output reg [31:0] sum, output reg [31:0] sum_left) ;

genvar i, j;
generate
    for (i = 0; i < 200; i = i + 1) begin
        for (j = 0; j < 300; j = j + 1) begin
            always @(*) begin
                sum = sum + image[i][j];
            end
        end
    end
endgenerate

genvar n, m;
generate
    for (n = 0; n < 200; n = n + 1) begin
        for (m = 0; m < 110; m = m + 1) begin
            always @(*) begin
                sum_left = sum_left + image[n][m];
            end
        end
    end
endgenerate

endmodule