// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLASSIFIER_TB__SYMS_H_
#define VERILATED_VCLASSIFIER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vclassifier_tb.h"

// INCLUDE MODULE CLASSES
#include "Vclassifier_tb___024root.h"
#include "Vclassifier_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vclassifier_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vclassifier_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vclassifier_tb___024root       TOP;

    // CONSTRUCTORS
    Vclassifier_tb__Syms(VerilatedContext* contextp, const char* namep, Vclassifier_tb* modelp);
    ~Vclassifier_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
