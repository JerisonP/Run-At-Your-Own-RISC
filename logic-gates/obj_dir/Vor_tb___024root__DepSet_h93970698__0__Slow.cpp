// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor_tb.h for the primary calling header

#include "Vor_tb__pch.h"
#include "Vor_tb___024root.h"

VL_ATTR_COLD void Vor_tb___024root___eval_static(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_static\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__or_tb__DOT__in1__0 
        = vlSelfRef.or_tb__DOT__in1;
    vlSelfRef.__Vtrigprevexpr___TOP__or_tb__DOT__in2__0 
        = vlSelfRef.or_tb__DOT__in2;
    vlSelfRef.__Vtrigprevexpr___TOP__or_tb__DOT__out__0 
        = vlSelfRef.or_tb__DOT__out;
}

VL_ATTR_COLD void Vor_tb___024root___eval_final(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_final\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vor_tb___024root___dump_triggers__stl(Vor_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vor_tb___024root___eval_phase__stl(Vor_tb___024root* vlSelf);

VL_ATTR_COLD void Vor_tb___024root___eval_settle(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_settle\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vor_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/or_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vor_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vor_tb___024root___dump_triggers__stl(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___dump_triggers__stl\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vor_tb___024root___act_sequent__TOP__0(Vor_tb___024root* vlSelf);

VL_ATTR_COLD void Vor_tb___024root___eval_stl(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_stl\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vor_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vor_tb___024root___eval_triggers__stl(Vor_tb___024root* vlSelf);

VL_ATTR_COLD bool Vor_tb___024root___eval_phase__stl(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_phase__stl\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vor_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vor_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vor_tb___024root___dump_triggers__act(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___dump_triggers__act\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( or_tb.in1)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( or_tb.in2)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( or_tb.out)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vor_tb___024root___dump_triggers__nba(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___dump_triggers__nba\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( or_tb.in1)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( or_tb.in2)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( or_tb.out)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vor_tb___024root___ctor_var_reset(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___ctor_var_reset\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->or_tb__DOT__in1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14429421613096463091ull);
    vlSelf->or_tb__DOT__in2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1413933834495515885ull);
    vlSelf->or_tb__DOT__out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16973458940024919126ull);
    vlSelf->__Vtrigprevexpr___TOP__or_tb__DOT__in1__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4534994738204139413ull);
    vlSelf->__Vtrigprevexpr___TOP__or_tb__DOT__in2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8643762920033930606ull);
    vlSelf->__Vtrigprevexpr___TOP__or_tb__DOT__out__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9726501151818227741ull);
    vlSelf->__VactDidInit = 0;
}
