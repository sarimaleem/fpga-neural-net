// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDATA_INIT__SYMS_H_
#define VERILATED_VDATA_INIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdata_init.h"

// INCLUDE MODULE CLASSES
#include "Vdata_init___024root.h"
#include "Vdata_init___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdata_init__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdata_init* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdata_init___024root           TOP;

    // CONSTRUCTORS
    Vdata_init__Syms(VerilatedContext* contextp, const char* namep, Vdata_init* modelp);
    ~Vdata_init__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
