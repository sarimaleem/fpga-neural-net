# SV_FILES = *.sv *.svh

# lint:
# 	verilator --lint-only --timing ${SV_FILES}

# build:
# 	verilator --cc --exe --build --timing -j 0 --top-module data_init ${SV_FILES} tb.cpp 

# test: build
# 	obj_dir/Vdata_init

SV_FILES = image_transfer.sv

lint:
	verilator --lint-only --timing ${SV_FILES}

build:
	verilator --cc --exe --build --timing -j 0 --top-module image_transfer ${SV_FILES} image_transfer_tb.cpp 

test: build
	obj_dir/Vimage_transfer


# clean:
# 	rm -r obj_dir
# 	mkdir obj_dir

# build: clean
# 	iverilog -g2012 -o obj_dir/test.out *.sv *.svh &> out.txt

# test: build
# 	vvp obj_dir/test.out


