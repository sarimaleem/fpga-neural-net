module test_vertical_strip (
    input reg [199:0][299:0] strip,
    output reg [31:0] transitions
);

// see number of transitions

initial
    transitions = 0;

genvar i;
generate
    for (i = 0; i < 298; i = i + 1) begin
        always @(*) begin
            if (strip[i] != strip[i+1]) begin
                transitions = transitions + 1;
            end
        end
    end
endgenerate


endmodule

