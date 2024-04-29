// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclassifier_tb.h for the primary calling header

#include "Vclassifier_tb__pch.h"
#include "Vclassifier_tb___024root.h"

void Vclassifier_tb___024root___timing_commit(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf405d34a__0.commit("@(posedge clk)");
    }
}

void Vclassifier_tb___024root___timing_resume(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf405d34a__0.resume("@(posedge clk)");
    }
}

void Vclassifier_tb___024root___eval_triggers__act(Vclassifier_tb___024root* vlSelf);
void Vclassifier_tb___024root___eval_act(Vclassifier_tb___024root* vlSelf);

bool Vclassifier_tb___024root___eval_phase__act(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vclassifier_tb___024root___eval_triggers__act(vlSelf);
    Vclassifier_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vclassifier_tb___024root___timing_resume(vlSelf);
        Vclassifier_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vclassifier_tb___024root___eval_nba(Vclassifier_tb___024root* vlSelf);

bool Vclassifier_tb___024root___eval_phase__nba(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vclassifier_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclassifier_tb___024root___dump_triggers__nba(Vclassifier_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vclassifier_tb___024root___dump_triggers__act(Vclassifier_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vclassifier_tb___024root___eval(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vclassifier_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vclassifier_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vclassifier_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vclassifier_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vclassifier_tb___024root___eval_debug_assertions(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
