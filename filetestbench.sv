`timescale 1ns / 1ps

module filetestbench;
    // Path to the file
    string filename = "Data/weights.csv";
    int file;
    real weights[$]; // Dynamic array to store the weights
    string line; // To hold the line read from the file
    real weight;
    int start_pos; // Start position for scanning the line
    int scanned; // Number of characters scanned

    initial begin
        // Open the file for reading
        file = $fopen(filename, "r");
        if (file == 0) begin
            $display("Error: Failed to open file %s", filename);
            $finish;
        end

        // Read the line from the file
        if ($fgets(line, file) == 0) begin
            $display("Error: Failed to read the line from the file");
            $fclose(file);
            $finish;
        end

        // Close the file as we have read the only line we need
        $fclose(file);

        // Process the line to extract floats
        start_pos = 0;
        while ($sscanf(line.substr(start_pos), "%f,%n", weight, scanned) > 0) begin
            weights.push_back(weight);
            start_pos += scanned; // Move the start position for the next scan
        end

        // Display the content of the array
        foreach (weights[i]) begin
            $display("weights[%0d] = %f", i, weights[i]);
        end
    end
endmodule
