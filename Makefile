build: 
	iverilog -g2012 -o testbench.out testbench.sv nn.sv

simulate:
	vvp testbench.out

clean:
	rm -f testbench.out *.vcd

.PHONY: all simulate clean
