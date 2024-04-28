`include "global_params.vh"

module TwoDArrayExample(input startin, input logic [HEIGHT-1:0][LENGTH-1:0][2:0][7:0] image, output logic [2:0] result);

	
	logic [2:0][7:0] lower_green = {36, 25, 25};
    logic [2:0][7:0] upper_green = {86, 255, 255};
	logic [HEIGHT-1:0][LENGTH-1:0] filtered_image;

	filter_green green(image, lower_green, upper_green, filtered_image);

	logic [7:0] sum;
	logic [7:0] sum_left;

	sum_pixels sum(filtered_image, sum, sum_left);

	logic [LENGTH-1:0] strip;
	get_vertical_strip strip(filtered_image, strip);

	logic [31:0] transitions;
	test_vertical_strip test(strip, transitions);

	// result: 0 is rock, 1 is paper, 2 is scissors
	assign result = transitions == 4 ? 2 : sum_left > 1200 : 1 : 0;
	


endmodule
