// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclassifier_tb.h for the primary calling header

#ifndef VERILATED_VCLASSIFIER_TB___024ROOT_H_
#define VERILATED_VCLASSIFIER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vclassifier_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclassifier_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ classifier_tb__DOT__data_init__DOT__init_in;
    CData/*4:0*/ classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel;
    CData/*4:0*/ classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions;
    CData/*1:0*/ classifier_tb__DOT__data_init__DOT__classifier__DOT__result;
    CData/*0:0*/ __Vtrigprevexpr___TOP__classifier_tb__DOT__data_init__DOT__init_in__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VlWide<19>/*599:0*/ classifier_tb__DOT__data_init__DOT__image;
    IData/*31:0*/ classifier_tb__DOT__data_init__DOT__classifier__DOT__sum;
    IData/*31:0*/ classifier_tb__DOT__data_init__DOT__classifier__DOT__sum_left;
    IData/*31:0*/ __VactIterCount;
    VlTriggerScheduler __VtrigSched_hf405d34a__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vclassifier_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclassifier_tb___024root(Vclassifier_tb__Syms* symsp, const char* v__name);
    ~Vclassifier_tb___024root();
    VL_UNCOPYABLE(Vclassifier_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
