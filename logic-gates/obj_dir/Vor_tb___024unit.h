// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vor_tb.h for the primary calling header

#ifndef VERILATED_VOR_TB___024UNIT_H_
#define VERILATED_VOR_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vor_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vor_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vor_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vor_tb___024unit(Vor_tb__Syms* symsp, const char* v__name);
    ~Vor_tb___024unit();
    VL_UNCOPYABLE(Vor_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
