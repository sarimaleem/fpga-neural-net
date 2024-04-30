// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_init.h for the primary calling header

#include "Vdata_init__pch.h"
#include "Vdata_init__Syms.h"
#include "Vdata_init___024unit.h"

void Vdata_init___024unit___ctor_var_reset(Vdata_init___024unit* vlSelf);

Vdata_init___024unit::Vdata_init___024unit(Vdata_init__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdata_init___024unit___ctor_var_reset(this);
}

void Vdata_init___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdata_init___024unit::~Vdata_init___024unit() {
}
