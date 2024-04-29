// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclassifier__pch.h"

//============================================================
// Constructors

Vclassifier::Vclassifier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclassifier__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , init_in{vlSymsp->TOP.init_in}
    , image{vlSymsp->TOP.image}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vclassifier::Vclassifier(const char* _vcname__)
    : Vclassifier(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclassifier::~Vclassifier() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vclassifier___024root___eval_debug_assertions(Vclassifier___024root* vlSelf);
#endif  // VL_DEBUG
void Vclassifier___024root___eval_static(Vclassifier___024root* vlSelf);
void Vclassifier___024root___eval_initial(Vclassifier___024root* vlSelf);
void Vclassifier___024root___eval_settle(Vclassifier___024root* vlSelf);
void Vclassifier___024root___eval(Vclassifier___024root* vlSelf);

void Vclassifier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclassifier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclassifier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vclassifier___024root___eval_static(&(vlSymsp->TOP));
        Vclassifier___024root___eval_initial(&(vlSymsp->TOP));
        Vclassifier___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vclassifier___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vclassifier::eventsPending() { return false; }

uint64_t Vclassifier::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vclassifier::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vclassifier___024root___eval_final(Vclassifier___024root* vlSelf);

VL_ATTR_COLD void Vclassifier::final() {
    Vclassifier___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclassifier::hierName() const { return vlSymsp->name(); }
const char* Vclassifier::modelName() const { return "Vclassifier"; }
unsigned Vclassifier::threads() const { return 1; }
void Vclassifier::prepareClone() const { contextp()->prepareClone(); }
void Vclassifier::atClone() const {
    contextp()->threadPoolpOnClone();
}
