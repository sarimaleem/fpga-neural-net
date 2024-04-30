// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_init.h for the primary calling header

#ifndef VERILATED_VDATA_INIT___024ROOT_H_
#define VERILATED_VDATA_INIT___024ROOT_H_  // guard

#include "verilated.h"


class Vdata_init__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_init___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ data_init__DOT__init_in;
    VL_IN8(clk,0,0);
    CData/*4:0*/ data_init__DOT__classifier__DOT__leftmost_pixel;
    CData/*4:0*/ data_init__DOT__classifier__DOT__num_transitions;
    CData/*1:0*/ data_init__DOT__classifier__DOT__result;
    CData/*0:0*/ __Vtrigprevexpr___TOP__data_init__DOT__init_in__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VlWide<19>/*599:0*/ data_init__DOT__image;
    IData/*31:0*/ data_init__DOT__classifier__DOT__sum;
    IData/*31:0*/ data_init__DOT__classifier__DOT__sum_left;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdata_init__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_init___024root(Vdata_init__Syms* symsp, const char* v__name);
    ~Vdata_init___024root();
    VL_UNCOPYABLE(Vdata_init___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
