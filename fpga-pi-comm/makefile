build:
	iverilog -g2012 -o test.out fpga-recv.sv tb.sv

run: build
	vvp test.out

simulate: run
	gtkwave 
