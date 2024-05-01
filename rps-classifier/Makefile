SV_FILES = *.sv *.svh

clean:
	rm -r obj_dir
	mkdir obj_dir

lint:
	verilator --lint-only --timing ${SV_FILES}

build:
	verilator --cc --exe --build --timing -j 0 --top-module data_init ${SV_FILES} tb.cpp 

test: clean build
	obj_dir/Vdata_init

SV_FILES_FPGA= image_transfer.sv classifier.sv

lint-fpga:
	verilator --lint-only --timing ${SV_FILES_FPGA}

build-fpga: clean
	verilator --cc --exe --build --timing -j 0 --top-module image_transfer ${SV_FILES_FPGA} image_transfer_tb.cpp 

test-fpga: build-fpga
	obj_dir/Vimage_transfer


# clean:
# 	rm -r obj_dir
# 	mkdir obj_dir

# build: clean
# 	iverilog -g2012 -o obj_dir/test.out *.sv *.svh &> out.txt

# test: build
# 	vvp obj_dir/test.out


