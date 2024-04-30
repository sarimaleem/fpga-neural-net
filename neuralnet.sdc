# inform quartus that the clk port brings a 50MHz clock into our design so
	# that timing closure on our design can be analyzed

# create_clock -name clk -period "50MHz" [get_ports clk]

# inform quartus that the LED output port has no critical timing requirements
	# its a single output port driving an LED, there are no timing relationships
	# that are critical for this

# create_clock -name sys_clk -period 10 [get_ports pi_clk]  # Adjust the period according to your clock frequency

# Input constraints
# set_input_delay -clock sys_clk 3 [get_ports {gpio_pin buttons write_enable}]  # Set input delay; adjust as necessary

# Output constraints
# set_output_delay -clock sys_clk 3 [get_ports LED]  # Set output delay; adjust as necessary

# False path constraints

set_false_path -from * -to [get_ports pi_clk]
set_false_path -from * -to [get_ports gpio_pin]
set_false_path -from * -to [get_ports LED]
set_false_path -from * -to [get_ports buttons]
set_false_path -from * -to [get_ports write_enable]

# Reset path, usually not critical unless asynchronous or part of a clock domain crossing
set_false_path -from * -to [get_ports rst_n]
