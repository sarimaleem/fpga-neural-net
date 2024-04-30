// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclassifier_tb.h for the primary calling header

#ifndef VERILATED_VCLASSIFIER_TB___024UNIT_H_
#define VERILATED_VCLASSIFIER_TB___024UNIT_H_  // guard

#include "verilated.h"


class Vclassifier_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclassifier_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vclassifier_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclassifier_tb___024unit(Vclassifier_tb__Syms* symsp, const char* v__name);
    ~Vclassifier_tb___024unit();
    VL_UNCOPYABLE(Vclassifier_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
