// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclassifier.h for the primary calling header

#include "Vclassifier__pch.h"
#include "Vclassifier__Syms.h"
#include "Vclassifier___024unit.h"

void Vclassifier___024unit___ctor_var_reset(Vclassifier___024unit* vlSelf);

Vclassifier___024unit::Vclassifier___024unit(Vclassifier__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vclassifier___024unit___ctor_var_reset(this);
}

void Vclassifier___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vclassifier___024unit::~Vclassifier___024unit() {
}
