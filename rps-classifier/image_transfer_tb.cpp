#include "Vimage_transfer.h"
#include "svdpi.h"
#include "verilated.h"

#include <iostream>
#include <fstream>

#include <inttypes.h>
#include <iostream>
#include <memory.h>
#include <string>

#define NUM_FAST_CYCLES 1000

using namespace std;

VerilatedContext *contextp;

void simulate_slow_clock_cycle(Vimage_transfer *dut) {
    // Simulate an entire slow clock cycle
    for (int i = 0; i < NUM_FAST_CYCLES * 2; i++) {
        dut->fpga_clk = 0;
        dut->eval();
        dut->fpga_clk = 1;
        dut->eval();
    }
}

void transfer_image(Vimage_transfer *dut) {
    ifstream hsv_file("hsv_image.txt", ios::binary);
    if (!hsv_file) {
        cerr << "Error opening file" << endl;
        return;
    }

    int hsv_byte;
    vector<int> hsv_bytes;
    while (hsv_file >> hsv_byte) {
        hsv_bytes.push_back(hsv_byte);
    }

    dut->rst = 1;
    simulate_slow_clock_cycle(dut);
    dut->rst = 0;
    simulate_slow_clock_cycle(dut);

    for (int hsv_byte : hsv_bytes) {
        for (int bit_index = 0; bit_index < 8; bit_index++) {
            dut->pi_clk = 0;
            dut->data_in = (hsv_byte >> bit_index) & 1;

            simulate_slow_clock_cycle(dut);

            dut->pi_clk = 1;

            simulate_slow_clock_cycle(dut);
        }
    }
}

int main(int argc, char **argv) {
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    auto *dut = new Vimage_transfer{contextp};
    for (int i = 0; i < 3; i++) {
        transfer_image(dut);
    }

    fflush(stdout);
    delete contextp;
    return 0;
}
