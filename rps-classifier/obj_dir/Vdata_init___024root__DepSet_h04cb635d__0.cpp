// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_init.h for the primary calling header

#include "Vdata_init__pch.h"
#include "Vdata_init__Syms.h"
#include "Vdata_init___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_init___024root___dump_triggers__act(Vdata_init___024root* vlSelf);
#endif  // VL_DEBUG

void Vdata_init___024root___eval_triggers__act(Vdata_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_init___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->data_init__DOT__init_in) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__data_init__DOT__init_in__0)));
    vlSelf->__Vtrigprevexpr___TOP__data_init__DOT__init_in__0 
        = vlSelf->data_init__DOT__init_in;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdata_init___024root___dump_triggers__act(vlSelf);
    }
#endif
}
