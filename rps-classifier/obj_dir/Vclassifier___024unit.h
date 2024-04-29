// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclassifier.h for the primary calling header

#ifndef VERILATED_VCLASSIFIER___024UNIT_H_
#define VERILATED_VCLASSIFIER___024UNIT_H_  // guard

#include "verilated.h"


class Vclassifier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclassifier___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vclassifier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclassifier___024unit(Vclassifier__Syms* symsp, const char* v__name);
    ~Vclassifier___024unit();
    VL_UNCOPYABLE(Vclassifier___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
