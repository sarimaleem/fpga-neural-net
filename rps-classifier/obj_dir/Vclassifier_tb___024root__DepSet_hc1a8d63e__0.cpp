// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclassifier_tb.h for the primary calling header

#include "Vclassifier_tb__pch.h"
#include "Vclassifier_tb__Syms.h"
#include "Vclassifier_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclassifier_tb___024root___dump_triggers__act(Vclassifier_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vclassifier_tb___024root___eval_triggers__act(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__classifier_tb__DOT__data_init__DOT__init_in__0)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__classifier_tb__DOT__data_init__DOT__init_in__0 
        = vlSelf->classifier_tb__DOT__data_init__DOT__init_in;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclassifier_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
