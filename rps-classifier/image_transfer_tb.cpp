#include "Vimage_transfer.h"
#include "svdpi.h"
#include "verilated.h"
#include <inttypes.h>
#include <iostream>
#include <memory.h>
#include <string>

#define PI_CYCLES 1800
#define FPGA_CYCLES = PI_CYCLES * 1000

using namespace std;

VerilatedContext *contextp;

void transfer_image() {
    auto *dut = new Vimage_transfer{contextp};

    

    for (int fpga_cycle = 0; fpga_cycle < FPGA_CYCLES; fpga_cycle++) {
        dut->fpga
        for (int pi_cycle = 0; pi_cycle < PI_CYCLES; pi_cycle++) {
            dut->
        }
    }

    // each iteration flips clock edge
    for (int iter = 0; iter < NUM_CYCLES * 2; iter++) {
        dut->clk = iter % 2;
        dut->eval();
    }
}

int main(int argc, char **argv) {
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    transfer_image();

    fflush(stdout);
    delete contextp;
    return 0;
}
