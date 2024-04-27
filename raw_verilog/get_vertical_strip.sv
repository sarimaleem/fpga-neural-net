module get_vertical_strip (
    input wire [199:0][299:0] image,
    output reg [299:0] strip // column has index of the 200 rows of the test strip
);

// find the leftmost pixel
// to do this, | each column starting from left and when it's nonzero that's leftmost
// then go over 30 columns and test vertical strip

reg [8:0] column;
reg done = 1'b0;

always @(*) begin
    column = 0;
    for (int i = 0; i < 300; i++) begin
        if (|image[i] && ~done) begin
            column = i;
            done = 1'b1;
        end
    end
end

always @(*) begin
    for (int i = 0; i < 200; i++) begin
        for (int j = 0; j < 300; j++) begin
            if (i == column) begin
                strip[j] = image[i][j];
            end
        end
    end
end

endmodule