module TwoDArrayExample;

  // Define parameters for array dimensions
  parameter WIDTH = 3;
  parameter HEIGHT = 3;

  // Define 2D array
  reg [7:0] array [0:HEIGHT-1][0:WIDTH-1];

  // Initialize array elements
  initial begin
    array[0][0] = 8'h01;
    array[0][1] = 8'h02;
    array[0][2] = 8'h03;
    array[1][0] = 8'h04;
    array[1][1] = 8'h05;
    array[1][2] = 8'h06;
    array[2][0] = 8'h07;
    array[2][1] = 8'h08;
    array[2][2] = 8'h09;
  end

  // Display array elements
  always @* begin
    $display("Image Array:");
    for (int i = 0; i < HEIGHT; i = i + 1) begin
      for (int j = 0; j < WIDTH; j = j + 1) begin
        $write("[%h]", array[i][j]);
      end
      $display("");
    end
  end

endmodule
