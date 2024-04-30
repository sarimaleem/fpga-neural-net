// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_init.h for the primary calling header

#ifndef VERILATED_VDATA_INIT___024UNIT_H_
#define VERILATED_VDATA_INIT___024UNIT_H_  // guard

#include "verilated.h"


class Vdata_init__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_init___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdata_init__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_init___024unit(Vdata_init__Syms* symsp, const char* v__name);
    ~Vdata_init___024unit();
    VL_UNCOPYABLE(Vdata_init___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
