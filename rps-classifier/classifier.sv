`include "common.svh"

module classifier (
    input logic clk,
    input logic init_in, 
    input logic [7:0] image [LENGTH-1:0][WIDTH-1:0][2:0]
);

    logic [LENGTH-1:0][WIDTH-1:0] filtered;
    filter_green filter_green(init_in, image, filtered);

    logic [31:0] sum;
	logic [31:0] sum_left;
    sum_pixels my_sum(init_in, filtered, sum, sum_left);

    logic [LENGTH-1:0] strip;
	// get_vertical_strip my_strip(filtered_image, strip);

    always @(posedge clk) begin
        if (init_in) begin
            // $display("true true %b", filtered[7][0]);
            for (int i = 0; i < LENGTH; i++) begin
                $display("%b", filtered[i]);
            end
            $display("sum: %b %b", sum_left, sum);
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
                            filtered[i][j] = 1'b1;
                        end else begin
                            filtered[i][j] = 1'b0;
                        end
                    end
                end
            end
        end
    endgenerate
endmodule

module sum_pixels(
    input logic init_in,
    input logic [LENGTH-1:0][WIDTH-1:0] filtered,
    output logic [31:0] sum,
    output logic [31:0] sum_left
);

    initial begin
        sum = 0;
        sum_left = 0;
    end

    genvar i, j;
    generate
        for (i = 0; i < LENGTH; i++) begin
            for (j = 0; j < WIDTH; j++) begin
                always_comb begin
                    if (init_in) begin
                        sum += filtered[i][j];
                    end
                end
            end
        end
    endgenerate

    genvar n, m;
    generate
        for (n = 0; n < LENGTH; n++) begin
            for (m = 0; m < LEFT; m++) begin
                always_comb begin
                    if (init_in) begin
                        sum_left += filtered[n][m];
                    end
                end
            end
        end
    endgenerate

endmodule


module get_vertical_strip (
    input logic [LENGTH-1:0][WIDTH-1:0] filtered,
    output logic [LENGTH-1] strip
);
    // Getting leftmost index
    // Take a bitwise of each column. Store the index of the first column we come across
    genvar j, i;
    generate
        wire [31:0] leftmost_index_dp [WIDTH:0];
        assign leftmost_index_dp[WIDTH] = 0;

        for (j = WIDTH-1; j >= 0; j--) begin
            wire [LENGTH:0] or_reduction_dp;

            assign or_reduction_dp[0] = 1'b0;

            for (i = 1; i <= LENGTH; i++) begin
                assign or_reduction_dp[i] = filtered[i][j] | or_reduction_dp[i - 1];
            end

            wire col_has_hand;
            assign col_has_hand = or_reduction_dp[LENGTH];

            assign leftmost_index_dp[j] = col_has_hand ? j : leftmost_index_dp[j + 1];
        end

        wire [7:0] leftmost_index;
        assign leftmost_index = leftmost_index_dp[0];

        
    endgenerate

    // Iterate through column with leftmost index (+ 30) // and return that strip
endmodule
