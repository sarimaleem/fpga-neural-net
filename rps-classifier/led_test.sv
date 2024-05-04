module neuralnet (
    input wire fpga_clk, // fpga clk, runs 50 mhz I think
    input logic [3:0] switches,
    output logic [2:0] breadboard,
    output logic [5:0] LED
);

    always_comb begin
        casez (switches)
            4'b0001: breadboard = 3'b011;
            4'b0010: breadboard = 3'b101;
            4'b0100: breadboard = 3'b110;
            default: breadboard = 3'b111;
        endcase
    end

    assign LED = 6'b010101;

endmodule
