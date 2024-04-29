// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclassifier_tb__pch.h"

//============================================================
// Constructors

Vclassifier_tb::Vclassifier_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclassifier_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vclassifier_tb::Vclassifier_tb(const char* _vcname__)
    : Vclassifier_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclassifier_tb::~Vclassifier_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vclassifier_tb___024root___eval_debug_assertions(Vclassifier_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vclassifier_tb___024root___eval_static(Vclassifier_tb___024root* vlSelf);
void Vclassifier_tb___024root___eval_initial(Vclassifier_tb___024root* vlSelf);
void Vclassifier_tb___024root___eval_settle(Vclassifier_tb___024root* vlSelf);
void Vclassifier_tb___024root___eval(Vclassifier_tb___024root* vlSelf);

void Vclassifier_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclassifier_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclassifier_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vclassifier_tb___024root___eval_static(&(vlSymsp->TOP));
        Vclassifier_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vclassifier_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vclassifier_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vclassifier_tb::eventsPending() { return false; }

uint64_t Vclassifier_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vclassifier_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vclassifier_tb___024root___eval_final(Vclassifier_tb___024root* vlSelf);

VL_ATTR_COLD void Vclassifier_tb::final() {
    Vclassifier_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclassifier_tb::hierName() const { return vlSymsp->name(); }
const char* Vclassifier_tb::modelName() const { return "Vclassifier_tb"; }
unsigned Vclassifier_tb::threads() const { return 1; }
void Vclassifier_tb::prepareClone() const { contextp()->prepareClone(); }
void Vclassifier_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
