`include "common.svh"

module classifier (
    input logic clk,
    input logic init_in, 
    input logic [7:0] image [LENGTH-1:0][WIDTH-1:0][2:0]
);

    logic [LENGTH-1:0][WIDTH-1:0] filtered;
    filter_green filter_green(init_in, image, filtered);

    always @(posedge clk) begin
        if (init_in) begin
            for (int i = 0; i < LENGTH; i++) begin
                $display("%b", filtered[i]);
            end
            $display("DONE\n");
        end
    end

endmodule

module filter_green (
    input logic init_in,
    input logic [7:0] image [LENGTH-1:0][WIDTH-1:0][2:0],
    output logic [LENGTH-1:0][WIDTH-1:0] filtered
);

    genvar i, j;
    generate
        for (i = 0; i < LENGTH; i++) begin
            for (j = 0; j < WIDTH; j++) begin
                always_comb begin
                    if (init_in) begin 
                        if (image[i][j][0] >= LOWER_GREEN_ONE && image[i][j][0] <= UPPER_GREEN_ONE &&
                                image[i][j][1] >= LOWER_GREEN_TWO && image[i][j][1] <= UPPER_GREEN_TWO &&
                                image[i][j][2] >= LOWER_GREEN_THREE && image[i][j][2] <= UPPER_GREEN_THREE) begin
                            filtered[i][j] = 1'b0;
                        end else begin
                            filtered[i][j] = 1'b1;
                            $display("NOT GREEN: %d %d", i, j);
                        end
                    end
                end
            end
        end
    endgenerate

endmodule
