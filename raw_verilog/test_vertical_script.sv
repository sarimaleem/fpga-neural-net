`include "global_params.vh"

module test_vertical_strip (
    input reg [WIDTH-1:0][LENGTH-1:0] strip,
    output reg [31:0] transitions
);

// see number of transitions

initial
    transitions = 0;

genvar i;
generate
    for (i = 0; i < WIDTH-2; i = i + 1) begin
        always @(*) begin
            if (strip[i] != strip[i+1]) begin
                transitions = transitions + 1;
            end
        end
    end
endgenerate


endmodule

