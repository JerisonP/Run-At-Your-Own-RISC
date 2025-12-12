// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor_tb.h for the primary calling header

#include "Vor_tb__pch.h"
#include "Vor_tb__Syms.h"
#include "Vor_tb___024unit.h"

void Vor_tb___024unit___ctor_var_reset(Vor_tb___024unit* vlSelf);

Vor_tb___024unit::Vor_tb___024unit(Vor_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vor_tb___024unit___ctor_var_reset(this);
}

void Vor_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vor_tb___024unit::~Vor_tb___024unit() {
}
