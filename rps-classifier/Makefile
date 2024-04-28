clean:
	rm -r obj_dir
	mkdir obj_dir

build: clean
	iverilog -g2012 -o obj_dir/test.out *.sv *.svh

test: build
	vvp obj_dir/test.out
