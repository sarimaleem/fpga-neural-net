test:
	iverilog -g2012 -o test.out *.sv *.svh
	vvp test.out > out.text

clean:
	rm *.out *.text

preprocess:
	python3 Image_preprocess.py