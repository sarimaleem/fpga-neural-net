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

void transfer_image() {
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

    auto *dut = new Vimage_transfer{contextp};

    dut->rst = 0;

    for (int hsv_byte : hsv_bytes) {
        for (int bit_index = 0; bit_index < 8; bit_index++) {
            dut->pi_clk = 0;
            dut->data_in = (hsv_byte >> bit_index) & 1;

            // Simulate an entire slow clock cycle
            for (int i = 0; i < NUM_FAST_CYCLES * 2; i++) {
                dut->fpga_clk = 0;
                dut->eval();
                dut->fpga_clk = 1;
                dut->eval();
            }

            dut->pi_clk = 1;

            // Simulate an entire slow clock cycle
            for (int i = 0; i < NUM_FAST_CYCLES * 2; i++) {
                dut->fpga_clk = 0;
                dut->eval();
                dut->fpga_clk = 1;
                dut->eval();
            }
        }
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
