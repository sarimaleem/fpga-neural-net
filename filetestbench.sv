`timescale 1ns / 1ps

module filetestbench;
    // Path to the file
    string filename = "Data/weights.csv";
    int file;
    real weights[$]; // Dynamic array to store the weights
    real weight;

    initial begin
        // Open the file for reading
        file = $fopen(filename, "r");
        if (file == 0) begin
            $display("Error: Failed to open file %s", filename);
            $finish;
        end

        while ($fscanf(file, "%f,", weight) > 0) begin
            weights.push_back(weight);
        end

        foreach (weights[i]) begin
            $display("weight %f", weights[i]);
        end
    end
endmodule

module readfile()
