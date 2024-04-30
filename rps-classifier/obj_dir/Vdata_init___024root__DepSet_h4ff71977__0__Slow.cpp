// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_init.h for the primary calling header

#include "Vdata_init__pch.h"
#include "Vdata_init___024root.h"

VL_ATTR_COLD void Vdata_init___024root___eval_static(Vdata_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_init___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdata_init___024root___eval_initial__TOP(Vdata_init___024root* vlSelf);

VL_ATTR_COLD void Vdata_init___024root___eval_initial(Vdata_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_init___024root___eval_initial\n"); );
    // Body
    Vdata_init___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__data_init__DOT__init_in__0 = 1U;
}

extern const VlWide<19>/*607:0*/ Vdata_init__ConstPool__CONST_hd1bb49e5_0;

VL_ATTR_COLD void Vdata_init___024root___eval_initial__TOP(Vdata_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_init___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->data_init__DOT__image[0U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[0U];
    vlSelf->data_init__DOT__image[1U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[1U];
    vlSelf->data_init__DOT__image[2U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[2U];
    vlSelf->data_init__DOT__image[3U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[3U];
    vlSelf->data_init__DOT__image[4U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[4U];
    vlSelf->data_init__DOT__image[5U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[5U];
    vlSelf->data_init__DOT__image[6U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[6U];
    vlSelf->data_init__DOT__image[7U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[7U];
    vlSelf->data_init__DOT__image[8U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[8U];
    vlSelf->data_init__DOT__image[9U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[9U];
    vlSelf->data_init__DOT__image[0xaU] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[0xaU];
    vlSelf->data_init__DOT__image[0xbU] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[0xbU];
    vlSelf->data_init__DOT__image[0xcU] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[0xcU];
    vlSelf->data_init__DOT__image[0xdU] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[0xdU];
    vlSelf->data_init__DOT__image[0xeU] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[0xeU];
    vlSelf->data_init__DOT__image[0xfU] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[0xfU];
    vlSelf->data_init__DOT__image[0x10U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[0x10U];
    vlSelf->data_init__DOT__image[0x11U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[0x11U];
    vlSelf->data_init__DOT__image[0x12U] = Vdata_init__ConstPool__CONST_hd1bb49e5_0[0x12U];
    vlSelf->data_init__DOT__init_in = 1U;
    vlSelf->data_init__DOT__classifier__DOT__sum = 0U;
    vlSelf->data_init__DOT__classifier__DOT__sum_left = 0U;
    vlSelf->data_init__DOT__classifier__DOT__leftmost_pixel = 0x1fU;
    vlSelf->data_init__DOT__classifier__DOT__num_transitions = 0U;
}

VL_ATTR_COLD void Vdata_init___024root___eval_final(Vdata_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_init___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdata_init___024root___eval_settle(Vdata_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_init___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_init___024root___dump_triggers__act(Vdata_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_init___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] data_init.init_in)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_init___024root___dump_triggers__nba(Vdata_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_init___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] data_init.init_in)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdata_init___024root___ctor_var_reset(Vdata_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_init___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(600, vlSelf->data_init__DOT__image);
    vlSelf->data_init__DOT__init_in = VL_RAND_RESET_I(1);
    vlSelf->data_init__DOT__classifier__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->data_init__DOT__classifier__DOT__sum_left = VL_RAND_RESET_I(32);
    vlSelf->data_init__DOT__classifier__DOT__leftmost_pixel = VL_RAND_RESET_I(5);
    vlSelf->data_init__DOT__classifier__DOT__num_transitions = VL_RAND_RESET_I(5);
    vlSelf->data_init__DOT__classifier__DOT__result = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__data_init__DOT__init_in__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
