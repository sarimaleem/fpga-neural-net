// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclassifier.h for the primary calling header

#include "Vclassifier__pch.h"
#include "Vclassifier___024root.h"

VL_ATTR_COLD void Vclassifier___024root___eval_static(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vclassifier___024root___eval_initial(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vclassifier___024root___eval_final(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vclassifier___024root___eval_settle(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclassifier___024root___dump_triggers__act(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclassifier___024root___dump_triggers__nba(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vclassifier___024root___ctor_var_reset(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->init_in = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(600, vlSelf->image);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
