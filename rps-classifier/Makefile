SV_FILES_FPGA=fpga-code.sv

clean:
	rm -r obj_dir
	mkdir obj_dir

lint-fpga:
	verilator --lint-only --timing ${SV_FILES_FPGA}

build-fpga: clean
	verilator --cc --exe --build --timing -j 0 --top-module neuralnet ${SV_FILES_FPGA} image_transfer_tb.cpp 

test-fpga: build-fpga
	obj_dir/Vneuralnet
