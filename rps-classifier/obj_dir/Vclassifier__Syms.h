// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLASSIFIER__SYMS_H_
#define VERILATED_VCLASSIFIER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vclassifier.h"

// INCLUDE MODULE CLASSES
#include "Vclassifier___024root.h"
#include "Vclassifier___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vclassifier__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vclassifier* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vclassifier___024root          TOP;

    // CONSTRUCTORS
    Vclassifier__Syms(VerilatedContext* contextp, const char* namep, Vclassifier* modelp);
    ~Vclassifier__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
