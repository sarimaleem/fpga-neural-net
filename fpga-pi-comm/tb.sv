module tb();
    logic [7:0] gpio_pin; // GPIO pin input
    logic pi_clk; // Raspberry Pi clock
    logic rst_n; // Active low reset
    logic write_enable; // Enable writing to memory
    logic [1:0] buttons; // Button inputs to select memory
    logic [5:0] LED;

    fpga_recv fpga_recv (gpio_pin, pi_clk, rst_n, write_enable, buttons, LED);

    logic [7:0] data_from_pi [3:0];

    initial begin
        pi_clk = 0;
        forever #10 pi_clk = ~pi_clk;
    end

    initial begin
        $dumpfile("sim.vcd"); //file to store value change dump (vcd)
        $dumpvars(0, tb);

        data_from_pi[0] = 8'b00011100;
        data_from_pi[1] = 8'b11100000;
        data_from_pi[2] = 8'b10010001;
        data_from_pi[3] = 8'b10101010;

        rst_n = 1'b0;
        write_enable = 1'b1;

        for (int i = 0; i < 4; i++) begin
            gpio_pin = data_from_pi[i];
            @(posedge pi_clk);
            $display("bottom 6 bits! %b", LED);
        end
        $finish;
    end
endmodule