// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclassifier_tb.h for the primary calling header

#include "Vclassifier_tb__pch.h"
#include "Vclassifier_tb___024root.h"

VL_ATTR_COLD void Vclassifier_tb___024root___eval_initial__TOP(Vclassifier_tb___024root* vlSelf);
VlCoroutine Vclassifier_tb___024root___eval_initial__TOP__Vtiming__0(Vclassifier_tb___024root* vlSelf);

void Vclassifier_tb___024root___eval_initial(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___eval_initial\n"); );
    // Body
    Vclassifier_tb___024root___eval_initial__TOP(vlSelf);
    Vclassifier_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__classifier_tb__DOT__data_init__DOT__init_in__0 
        = vlSelf->classifier_tb__DOT__data_init__DOT__init_in;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_INLINE_OPT VlCoroutine Vclassifier_tb___024root___eval_initial__TOP__Vtiming__0(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hf405d34a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "tb.sv", 
                                                       9);
    co_await vlSelf->__VtrigSched_hf405d34a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "tb.sv", 
                                                       9);
    co_await vlSelf->__VtrigSched_hf405d34a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "tb.sv", 
                                                       9);
    VL_FINISH_MT("tb.sv", 12, "");
}

void Vclassifier_tb___024root___eval_act(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___eval_act\n"); );
}

void Vclassifier_tb___024root___nba_sequent__TOP__0(Vclassifier_tb___024root* vlSelf);

void Vclassifier_tb___024root___eval_nba(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vclassifier_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vclassifier_tb___024root___nba_sequent__TOP__0(Vclassifier_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vclassifier_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclassifier_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->classifier_tb__DOT__data_init__DOT__init_in)) {
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[0U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[1U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[1U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[2U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[2U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[3U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[3U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[4U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[4U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[5U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[5U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[6U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[6U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[7U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[7U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[8U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[8U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[9U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[9U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x18U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x18U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x19U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x19U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1aU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x1aU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1bU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (1U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x1bU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 1U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1cU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (2U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x1cU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 2U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1dU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (3U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x1dU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 3U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1eU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (4U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x1eU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 4U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1fU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (5U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                >> 0x1fU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 5U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U]));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (6U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U])) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 6U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 1U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (7U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 1U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 7U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 2U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (8U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 2U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 8U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 3U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (9U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 3U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 9U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 4U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xaU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 4U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xaU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 5U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xbU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 5U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xbU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 6U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xcU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 6U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xcU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 7U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xdU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 7U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xdU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 8U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xeU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 8U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xeU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 9U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0xfU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 9U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0xfU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0xaU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x10U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0xaU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x10U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0xbU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x11U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0xbU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x11U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0xcU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x12U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0xcU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x12U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0xdU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x13U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0xdU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x13U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0xeU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x14U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0xeU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x14U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0xfU)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x15U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0xfU))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x15U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0x10U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x16U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0x10U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x16U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0x11U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x17U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0x11U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x17U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0x12U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x18U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0x12U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x18U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0x13U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x19U < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0x13U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x19U;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0x14U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1aU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0x14U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1aU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0x15U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1bU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0x15U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1bU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0x16U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1cU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0x16U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1cU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 0x17U)));
        if ((((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
              & (0x1dU < (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))) 
             & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                >> 0x17U))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel = 0x1dU;
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0U]));
        if (((1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                    ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel) 
                     >> 5U)] >> (0x1fU & (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
             != (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                       >> (0x1fU & ((IData)(2U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 1U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x1eU) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x1eU) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x1eU) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x1eU) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x1eU) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x1eU) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 2U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x3cU) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x3cU) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x3cU) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x3cU) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x3cU) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x3cU) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 3U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x5aU) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x5aU) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x5aU) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x5aU) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x5aU) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x5aU) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 4U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x78U) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x78U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x78U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x78U) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x78U) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x78U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 5U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x96U) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x96U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x96U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x96U) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x96U) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x96U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 6U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0xb4U) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0xb4U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0xb4U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0xb4U) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0xb4U) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0xb4U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 7U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0xd2U) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0xd2U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0xd2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0xd2U) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0xd2U) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0xd2U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x1eU)));
        if ((((0x257U >= (0x3ffU & ((IData)(0xf0U) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0xf0U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0xf0U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0xf0U) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0xf0U) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0xf0U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0U] 
                     >> 0x1fU)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x10eU) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x10eU) 
                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x10eU) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x10eU) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x10eU) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x10eU) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[1U]));
        if ((((0x257U >= (0x3ffU & ((IData)(0x12cU) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x12cU) 
                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x12cU) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x12cU) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x12cU) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x12cU) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 1U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x14aU) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x14aU) 
                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x14aU) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x14aU) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x14aU) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x14aU) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 2U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x168U) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x168U) 
                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x168U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x168U) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x168U) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x168U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 3U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x186U) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x186U) 
                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x186U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x186U) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x186U) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x186U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 4U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x1a4U) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x1a4U) 
                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x1a4U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x1a4U) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x1a4U) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x1a4U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 5U)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x1c2U) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x1c2U) 
                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x1c2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x1c2U) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x1c2U) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x1c2U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x1cU)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x1e0U) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x1e0U) 
                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x1e0U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x1e0U) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x1e0U) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x1e0U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x1dU)));
        if ((((0x257U >= (0x3ffU & ((IData)(0x1feU) 
                                    + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
              && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                        (0x1fU & (((IData)(0x1feU) 
                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(0x1feU) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
             != ((0x257U >= (0x3ffU & ((IData)(0x1feU) 
                                       + (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))) 
                 && (1U & (vlSelf->classifier_tb__DOT__data_init__DOT__image[
                           (0x1fU & (((IData)(0x1feU) 
                                      + (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x1feU) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__leftmost_pixel)))))))))) {
            vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions)));
        }
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x1eU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__result 
            = ((4U == (IData)(vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__num_transitions))
                ? 2U : ((0x4b0U < vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum_left)
                         ? 1U : 0U));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[1U] 
                     >> 0x1fU)));
        VL_WRITEF_NX("result: %1#\n",0,2,vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__result);
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[2U]));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 1U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 2U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 3U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1aU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1bU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1cU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1dU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1eU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[2U] 
                     >> 0x1fU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[3U]));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 1U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x18U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x19U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1aU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1bU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1cU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1dU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1eU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[3U] 
                     >> 0x1fU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x16U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x17U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x18U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x19U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x1aU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x1bU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x1cU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[4U] 
                     >> 0x1dU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x14U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x15U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x16U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x17U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x18U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x19U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x1aU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[5U] 
                     >> 0x1bU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x12U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x13U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x14U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x15U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x16U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x17U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x18U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[6U] 
                     >> 0x19U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x10U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x11U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x12U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x13U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x14U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x15U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x16U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[7U] 
                     >> 0x17U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0xeU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0xfU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x10U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x11U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x12U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x13U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x14U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[8U] 
                     >> 0x15U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0xcU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0xdU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0xeU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0xfU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x10U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x11U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x12U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[9U] 
                     >> 0x13U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xaU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xbU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xcU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xdU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xeU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0xfU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x10U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xaU] 
                     >> 0x11U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 8U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 9U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xaU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xbU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xcU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xdU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xeU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xbU] 
                     >> 0xfU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 6U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 7U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 8U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 9U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0xaU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0xbU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0xcU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xcU] 
                     >> 0xdU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 4U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 5U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 6U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 7U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 8U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 9U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0xaU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xdU] 
                     >> 0xbU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 2U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 3U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 4U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 5U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 6U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 7U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 8U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xeU] 
                     >> 9U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU]));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 1U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 2U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 3U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 4U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 5U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 6U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 7U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x1eU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0xfU] 
                     >> 0x1fU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U]));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 1U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 2U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 3U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 4U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 5U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x1cU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x1dU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x1eU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x10U] 
                     >> 0x1fU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U]));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 1U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 2U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 3U)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1aU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1bU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1cU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1dU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1eU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x11U] 
                     >> 0x1fU)));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U]));
        vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
            = (vlSelf->classifier_tb__DOT__data_init__DOT__classifier__DOT__sum 
               + ((IData)(vlSelf->classifier_tb__DOT__data_init__DOT__init_in) 
                  & (vlSelf->classifier_tb__DOT__data_init__DOT__image[0x12U] 
                     >> 1U)));
    }
}
