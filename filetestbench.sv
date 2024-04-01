`timescale 1ns / 1ps

module filetestbench;

    int fd;
    byte array[256];
    int read_bytes;

    initial begin
        $display("Test bench started.");

        fd = $fopen("output_file.bin", "rb");

        #100
        read_bytes = $fread(array, fd);
        #100;

        $display("%d", fd);

        for (int i = 0; i < 256; i++) begin
            $display("array[%0d] = %b", i, array[i]);
        end

        $finish;
    end

endmodule
