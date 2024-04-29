// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclassifier.h for the primary calling header

#ifndef VERILATED_VCLASSIFIER___024ROOT_H_
#define VERILATED_VCLASSIFIER___024ROOT_H_  // guard

#include "verilated.h"


class Vclassifier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclassifier___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(init_in,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(image,599,0,19);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vclassifier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclassifier___024root(Vclassifier__Syms* symsp, const char* v__name);
    ~Vclassifier___024root();
    VL_UNCOPYABLE(Vclassifier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
