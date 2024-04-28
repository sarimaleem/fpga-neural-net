`include "global_params.svh"

module TwoDArrayExample(input startin, output logic [2:0] result);

	logic [HEIGHT-1:0][LENGTH-1:0][2:0][7:0] image;
	integer file;
	integer i, j, k;

	// genvar i, j, k;
	// generate
		
	// endgenerate
	initial begin
		$display("sarim aleem");
		file = $fopen("image_binary", "rb");
		if (file == 0) begin
			$display("Error opening file");
			$finish;
		end else begin
			$display("first value: %d", image[0][0][0]);
			for (i = 0; i < HEIGHT; i = i + 1) begin
				for (j = 0; j < LENGTH; j = j + 1) begin
					for (k = 0; k < 3; k = k + 1) begin
						$fread(image[i][j][k], file);
					end
				end
			end
		end
	end
	

	logic [2:0][7:0] lower_green = {8'd36, 8'd25, 8'd25};
    logic [2:0][7:0] upper_green = {8'd86, 8'd255, 8'd255};
	logic [HEIGHT-1:0][LENGTH-1:0] filtered_image;

	filter_green green(image, lower_green, upper_green, filtered_image);

	logic [31:0] sum;
	logic [31:0] sum_left;

	sum_pixels my_sum(filtered_image, sum, sum_left);

	logic [HEIGHT-1:0] strip;
	get_vertical_strip my_strip(filtered_image, strip);

	logic [31:0] transitions;
	test_vertical_strip test(strip, transitions);

	// result: 0 is rock, 1 is paper, 2 is scissors
	assign result = transitions == 3'd4 ? 3'd2 : (sum_left > 1200 ? 3'd1 : 3'd0);

	initial begin
		$display("result: %d", result);
		$finish;
	end



endmodule
