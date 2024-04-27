module filter_green (
    input wire [199:0][299:0][2:0][7:0] image,
    input wire [2:0][7:0] lower_green,
    input wire [2:0][7:0] upper_green,
    output reg [199:0][299:0] filtered
);

// everywhere green is there, = 0 in filtered

genvar i, j;
generate
    for (i = 0; i < 200; i = i + 1) begin
        for (j = 0; j < 300; j = j + 1) begin
            always @(*) begin
                if (image[i][j][0] >= lower_green[0] && image[i][j][0] <= upper_green[0] &&
                    image[i][j][1] >= lower_green[1] && image[i][j][1] <= upper_green[1] &&
                    image[i][j][2] >= lower_green[2] && image[i][j][2] <= upper_green[2]) begin
                    filtered[i][j] = 1'b0;
                end else begin
                    filtered[i][j] = 1'b1;
                end
            end
        end
    end
endgenerate

endmodule