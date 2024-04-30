// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdata_init__pch.h"
#include "Vdata_init.h"
#include "Vdata_init___024root.h"
#include "Vdata_init___024unit.h"

// FUNCTIONS
Vdata_init__Syms::~Vdata_init__Syms()
{
}

Vdata_init__Syms::Vdata_init__Syms(VerilatedContext* contextp, const char* namep, Vdata_init* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(11);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
