#include "Vdata_init.h"
#include "svdpi.h"
#include "verilated.h"
#include <inttypes.h>
#include <iostream>
#include <memory.h>
#include <string>

#define NUM_CYCLES 10

using namespace std;

VerilatedContext *contextp;

bool run_classifier() {
    auto *dut = new Vdata_init{contextp};

    // each iteration flips clock edge
    for (int iter = 0; iter < NUM_CYCLES; iter++) {
        dut->eval();
    }

    return true;
}

int main(int argc, char **argv) {
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    run_classifier();

    fflush(stdout);
    delete contextp;
    return 0;
}
