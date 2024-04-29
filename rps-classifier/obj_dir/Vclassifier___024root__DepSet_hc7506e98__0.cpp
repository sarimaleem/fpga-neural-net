// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclassifier.h for the primary calling header

#include "Vclassifier__pch.h"
#include "Vclassifier___024root.h"

void Vclassifier___024root___eval_act(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval_act\n"); );
}

void Vclassifier___024root___nba_sequent__TOP__0(Vclassifier___024root* vlSelf);

void Vclassifier___024root___eval_nba(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vclassifier___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vclassifier___024root___nba_sequent__TOP__0(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->init_in)) {
        VL_WRITEF_NX("%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n%b\n\n\n",0,
                     30,(0x3fffffffU & vlSelf->image[0U]),
                     30,(0x3fffffffU & ((vlSelf->image[1U] 
                                         << 2U) | (
                                                   vlSelf->image[0U] 
                                                   >> 0x1eU))),
                     30,(0x3fffffffU & ((vlSelf->image[2U] 
                                         << 4U) | (
                                                   vlSelf->image[1U] 
                                                   >> 0x1cU))),
                     30,(0x3fffffffU & ((vlSelf->image[3U] 
                                         << 6U) | (
                                                   vlSelf->image[2U] 
                                                   >> 0x1aU))),
                     30,(0x3fffffffU & ((vlSelf->image[4U] 
                                         << 8U) | (
                                                   vlSelf->image[3U] 
                                                   >> 0x18U))),
                     30,(0x3fffffffU & ((vlSelf->image[5U] 
                                         << 0xaU) | 
                                        (vlSelf->image[4U] 
                                         >> 0x16U))),
                     30,(0x3fffffffU & ((vlSelf->image[6U] 
                                         << 0xcU) | 
                                        (vlSelf->image[5U] 
                                         >> 0x14U))),
                     30,(0x3fffffffU & ((vlSelf->image[7U] 
                                         << 0xeU) | 
                                        (vlSelf->image[6U] 
                                         >> 0x12U))),
                     30,(0x3fffffffU & ((vlSelf->image[8U] 
                                         << 0x10U) 
                                        | (vlSelf->image[7U] 
                                           >> 0x10U))),
                     30,(0x3fffffffU & ((vlSelf->image[9U] 
                                         << 0x12U) 
                                        | (vlSelf->image[8U] 
                                           >> 0xeU))),
                     30,(0x3fffffffU & ((vlSelf->image[0xaU] 
                                         << 0x14U) 
                                        | (vlSelf->image[9U] 
                                           >> 0xcU))),
                     30,(0x3fffffffU & ((vlSelf->image[0xbU] 
                                         << 0x16U) 
                                        | (vlSelf->image[0xaU] 
                                           >> 0xaU))),
                     30,(0x3fffffffU & ((vlSelf->image[0xcU] 
                                         << 0x18U) 
                                        | (vlSelf->image[0xbU] 
                                           >> 8U))),
                     30,(0x3fffffffU & ((vlSelf->image[0xdU] 
                                         << 0x1aU) 
                                        | (vlSelf->image[0xcU] 
                                           >> 6U))),
                     30,(0x3fffffffU & ((vlSelf->image[0xeU] 
                                         << 0x1cU) 
                                        | (vlSelf->image[0xdU] 
                                           >> 4U))),
                     30,(vlSelf->image[0xeU] >> 2U),
                     30,(0x3fffffffU & vlSelf->image[0xfU]),
                     30,(0x3fffffffU & ((vlSelf->image[0x10U] 
                                         << 2U) | (
                                                   vlSelf->image[0xfU] 
                                                   >> 0x1eU))),
                     30,(0x3fffffffU & ((vlSelf->image[0x11U] 
                                         << 4U) | (
                                                   vlSelf->image[0x10U] 
                                                   >> 0x1cU))),
                     30,(0x3fffffffU & ((vlSelf->image[0x12U] 
                                         << 6U) | (
                                                   vlSelf->image[0x11U] 
                                                   >> 0x1aU))));
    }
}

void Vclassifier___024root___eval_triggers__act(Vclassifier___024root* vlSelf);

bool Vclassifier___024root___eval_phase__act(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vclassifier___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vclassifier___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vclassifier___024root___eval_phase__nba(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vclassifier___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclassifier___024root___dump_triggers__nba(Vclassifier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vclassifier___024root___dump_triggers__act(Vclassifier___024root* vlSelf);
#endif  // VL_DEBUG

void Vclassifier___024root___eval(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vclassifier___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("classifier.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vclassifier___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("classifier.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vclassifier___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vclassifier___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vclassifier___024root___eval_debug_assertions(Vclassifier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->init_in & 0xfeU))) {
        Verilated::overWidthError("init_in");}
}
#endif  // VL_DEBUG
