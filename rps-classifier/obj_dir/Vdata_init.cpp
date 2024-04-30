// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_init__pch.h"

//============================================================
// Constructors

Vdata_init::Vdata_init(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdata_init__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdata_init::Vdata_init(const char* _vcname__)
    : Vdata_init(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdata_init::~Vdata_init() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdata_init___024root___eval_debug_assertions(Vdata_init___024root* vlSelf);
#endif  // VL_DEBUG
void Vdata_init___024root___eval_static(Vdata_init___024root* vlSelf);
void Vdata_init___024root___eval_initial(Vdata_init___024root* vlSelf);
void Vdata_init___024root___eval_settle(Vdata_init___024root* vlSelf);
void Vdata_init___024root___eval(Vdata_init___024root* vlSelf);

void Vdata_init::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_init::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_init___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdata_init___024root___eval_static(&(vlSymsp->TOP));
        Vdata_init___024root___eval_initial(&(vlSymsp->TOP));
        Vdata_init___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdata_init___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdata_init::eventsPending() { return false; }

uint64_t Vdata_init::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdata_init::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdata_init___024root___eval_final(Vdata_init___024root* vlSelf);

VL_ATTR_COLD void Vdata_init::final() {
    Vdata_init___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdata_init::hierName() const { return vlSymsp->name(); }
const char* Vdata_init::modelName() const { return "Vdata_init"; }
unsigned Vdata_init::threads() const { return 1; }
void Vdata_init::prepareClone() const { contextp()->prepareClone(); }
void Vdata_init::atClone() const {
    contextp()->threadPoolpOnClone();
}
