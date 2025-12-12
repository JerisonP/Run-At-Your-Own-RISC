// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vor_tb.h for the primary calling header

#ifndef VERILATED_VOR_TB___024ROOT_H_
#define VERILATED_VOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vor_tb___024unit;


class Vor_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vor_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vor_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ or_tb__DOT__in1;
    CData/*0:0*/ or_tb__DOT__in2;
    CData/*0:0*/ or_tb__DOT__out;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__or_tb__DOT__in1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__or_tb__DOT__in2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__or_tb__DOT__out__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vor_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vor_tb___024root(Vor_tb__Syms* symsp, const char* v__name);
    ~Vor_tb___024root();
    VL_UNCOPYABLE(Vor_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
