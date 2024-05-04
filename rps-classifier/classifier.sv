`include "common.svh"

module classifier (
    input logic rst,
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

    always @(init_in or rst) begin
        if (rst) begin
            sum = 0;
            sum_left = 0;
            leftmost_pixel = 5'b11111;
            num_transitions = 0;
        end
        else if (init_in) begin
            // Compute total pixels
            for (int i = 0; i < LENGTH; i++) begin
                for (int j = 0; j < WIDTH; j++) begin
                    sum += {{31{1'b0}}, image[i][j]};
                end
            end

            // Compute total left pixels
            for (int i = 0; i < LENGTH; i++) begin
                for (int j = 0; j < LEFT; j++) begin
                    sum_left += {{31{1'b0}}, image[i][j]};
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
            for (int i = 0; i < LENGTH - 1; i++) begin
                if (image[i][leftmost_pixel + SHIFT] != image[i + 1][leftmost_pixel + SHIFT]) begin
                    num_transitions++;
                end
            end

            assign result = num_transitions == 4 ? 2'b10 : (sum_left > LENGTH * WIDTH / 50 ? 2'b01 : 2'b00);
            $display("num transitions: %d, sum: %d sum left: %d leftmost pixel: %d\n", num_transitions, sum, sum_left, leftmost_pixel);
            $display("result: %d", result);
        end
    end

    always_comb begin
        case (result)
            0: begin
                $display("got here!");
            end
            1: begin
                $display("why am I here!");
            end
            2: begin
                $display("heyyy");
            end
            default: begin
                $display("Default!");
            end
        endcase
    end
endmodule
