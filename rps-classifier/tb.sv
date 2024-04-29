module tb;
    logic clk;

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    data_init data_init (clk);

    initial begin
        for (int i = 0; i < 3; i++) begin
            @(posedge clk);
        end

        $finish;
    end
    
endmodule