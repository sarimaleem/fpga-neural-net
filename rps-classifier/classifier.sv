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
    logic result;
	get_vertical_strip my_strip(init_in, filtered, result, strip);

    always @(posedge clk) begin
        if (init_in) begin
            for (int i = 0; i < LENGTH; i++) begin
                $display("%b", filtered[i]);
            end
            $display("sum: %d %d", sum_left, sum);
            $display("result: %b", result);
            $display("strip: %b", strip);
            $display("DONE\n");
        end
    end

endmodule

module filter_green (
    input logic init_in,
    input logic [7:0] image [LENGTH-1:0][WIDTH-1:0][2:0],
    output logic [LENGTH-1:0][WIDTH-1:0] filtered
);

    initial begin
        filtered = 0;
    end

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
    input logic init_in,
    input logic [LENGTH-1:0][WIDTH-1:0] filtered,
    output logic result,
    output logic [LENGTH-1:0] strip
);

    // Getting leftmost index
    // Take a bitwise of each column. Store the index of the first column we come across

    genvar i;
    generate
        wire [LENGTH:0] or_reduction;
        assign or_reduction[0] = 0;

        for (i = 1; i <= LENGTH; i++) begin
            assign or_reduction[i] = (filtered[i][0] | or_reduction[i-1]);
        end

        assign result = or_reduction[LENGTH];
    endgenerate


    // wire [31:0] leftmost_index;

    // genvar j, i;
    // generate
    //     wire [31:0] leftmost_index_dp [WIDTH:0];
    //     assign leftmost_index_dp[WIDTH] = 0;

    //     for (j = WIDTH-1; j >= 0; j--) begin
    //         wire [LENGTH:0] or_reduction_dp;

    //         assign or_reduction_dp[0] = 1'b0;

    //         for (i = 1; i <= LENGTH; i++) begin
    //             assign or_reduction_dp[i] = init_in & (filtered[i][j] | or_reduction_dp[i - 1]);
    //         end

    //         wire col_has_hand;
    //         assign col_has_hand = or_reduction_dp[LENGTH];

    //         assign leftmost_index_dp[j] = col_has_hand ? j : leftmost_index_dp[j + 1];
    //     end

    //     assign leftmost_index = leftmost_index_dp[0];     
    // endgenerate

    // // initial begin
    // //     $display("%b", or_reduction_dp);
    // // end

    // always_comb begin
    //     $display("LEFT: %d", leftmost_index);
    // end

    // genvar m, n;
    // generate
    //     for (m = 0; m < LENGTH; m++) begin
    //         for (n = 0; n < WIDTH; n++) begin
    //             always_comb begin
    //                 if (n == leftmost_index && init_in) begin
    //                     $display("hey?");
    //                     strip[m] = filtered[m][n];
    //                 end
    //             end
    //         end
    //     end
    // endgenerate

    // Iterate through column with leftmost index (+ 30) // and return that strip
endmodule
