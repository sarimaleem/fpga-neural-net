SV_FILES=neuralnet.sv

lint:
	verilator --lint-only ${SV_FILES}
