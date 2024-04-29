// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclassifier.h for the primary calling header

#include "Vclassifier__pch.h"
#include "Vclassifier__Syms.h"
#include "Vclassifier___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclassifier___024root___dump_triggers__act(Vclassifier___024root* vlSelf);
#endif  // VL_DEBUG

void Vclassifier___024root___eval_triggers__act(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclassifier___024root___dump_triggers__act(vlSelf);
    }
#endif
}
