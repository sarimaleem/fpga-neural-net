`include "global_params.svh"

module get_vertical_strip (
    input wire [HEIGHT-1:0][LENGTH-1:0] image,
    output reg [HEIGHT-1:0] strip // column has index of the 200 rows of the test strip
);

// find the leftmost pixel
// to do this, | each column starting from left and when it's nonzero that's leftmost
// then go over 30 columns and test vertical strip

always_comb begin
    // find leftmost index
    for (int i = 0; i < LENGTH; i++) begin
        for (int j = 0; j < HEIGHT; j++) begin
            if (image[j][i] != 0) begin
                strip[j] = 1'b1;
                break;
            end
        end
    end

    // get strip from leftmost index
end

reg [8:0] column;
reg done = 1'b0;

always @(*) begin
    column = 0;
    for (int i = 0; i < LENGTH; i++) begin
        if (|image[i] && ~done) begin // wrong
            column = i;
            done = 1'b1;
        end
    end
end

genvar row_index;
genvar col_index;
generate
    for (row_index = 0; row_index < HEIGHT; row_index++) begin
        for (col_index = 0; col_index < LENGTH; col_index++) begin
            if (col_index == column) begin
                assign strip[row_index] = image[row_index][column];
            end
        end
    end
endgenerate

// always @(*) begin
//     for (int i = 0; i < HEIGHT; i++) begin
//         for (int j = 0; j < LENGTH; j++) begin
//             if (done && i == column) begin
//                 strip[j] = image[i][j];
//             end
//         end
//     end
// end



endmodule