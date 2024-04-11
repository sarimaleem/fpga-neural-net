# Define the compiler and flags
IVL = iverilog
IVLFLAGS = -g2012
VVP = vvp
GTKWAVE = gtkwave

# Output file names
OUTPUT = testbench.out
WAVEFORM = testbench.vcd

# Source files
SOURCES = testbench.sv nn.sv

.PHONY: all build run simulate clean

all: build run

build: $(SOURCES)
	$(IVL) $(IVLFLAGS) -o $(OUTPUT) $(SOURCES)

buildfile:
	iverilog -g2012 -o filebench.out filetestbench.sv

run: $(OUTPUT)
	$(VVP) $(OUTPUT)

simulate:
	$(GTKWAVE) $(WAVEFORM)

clean:
	rm -f *.fcd *.out

