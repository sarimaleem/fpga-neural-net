test:
	iverilog -g2012 -o test.out *.sv
	vvp test.out > out.text

clean:
	rm *.out *.text