`include "common.svh"

module classifier (
    input logic clk,
    input logic init_in,
    input logic [LENGTH-1:0][WIDTH-1:0] image
);

    logic [31:0] sum;
    logic [31:0] sum_left;
    logic [4:0] leftmost_pixel;
    logic [4:0] num_transitions;
    logic [1:0] result;

    initial begin
        sum = 0;
        sum_left = 0;
        leftmost_pixel = 5'b11111;
        num_transitions = 0;
    end

    always @(init_in) begin
        if (init_in) begin
            // Compute total pixels
            for (int i = 0; i < LENGTH; i++) begin
                for (int j = 0; j < WIDTH; j++) begin
                    sum += {{31{1'b0}}, init_in & image[i][j]};
                end
            end

            // Compute total left pixels
            for (int i = 0; i < LENGTH; i++) begin
                for (int j = 0; j < LEFT; j++) begin
                    sum += {{31{1'b0}}, init_in & image[i][j]};
                end
            end

            // Compute leftmost pixel
            for (int i = 0; i < LENGTH; i++) begin
                for (int j = 0; j < WIDTH; j++) begin
                    if (init_in && j < leftmost_pixel && image[i][j]) begin
                        leftmost_pixel = j[4:0];
                    end
                end
            end

            // Compute number of transitions
            for (int i = 0; i < LENGTH - 2; i++) begin
                if (image[i][leftmost_pixel] != image[i][leftmost_pixel + SHIFT]) begin
                    num_transitions++;
                end
            end

            assign result = num_transitions == 4 ? 2'b10 : (sum_left > 1200 ? 2'b01 : 2'b00);
            $display("result: %d", result);
        end
    end
endmodule
