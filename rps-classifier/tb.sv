module classifier_tb (
    input logic clk
);

    data_init data_init (clk);

    initial begin        
        for (int i = 0; i < 3; i++) begin
            @(posedge clk);
        end

        $finish;
    end

    
endmodule