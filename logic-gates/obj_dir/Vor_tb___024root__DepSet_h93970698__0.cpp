// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor_tb.h for the primary calling header

#include "Vor_tb__pch.h"
#include "Vor_tb___024root.h"

VlCoroutine Vor_tb___024root___eval_initial__TOP__Vtiming__0(Vor_tb___024root* vlSelf);

void Vor_tb___024root___eval_initial(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_initial\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vor_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vor_tb___024root___act_sequent__TOP__0(Vor_tb___024root* vlSelf);

void Vor_tb___024root___eval_act(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_act\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vor_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vor_tb___024root___act_sequent__TOP__0(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___act_sequent__TOP__0\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.or_tb__DOT__out = (1U & (~ ((~ (IData)(vlSelfRef.or_tb__DOT__in1)) 
                                          & (~ (IData)(vlSelfRef.or_tb__DOT__in2)))));
}

void Vor_tb___024root___nba_sequent__TOP__0(Vor_tb___024root* vlSelf);

void Vor_tb___024root___eval_nba(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_nba\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vor_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vor_tb___024root___timing_resume(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___timing_resume\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vor_tb___024root___eval_triggers__act(Vor_tb___024root* vlSelf);

bool Vor_tb___024root___eval_phase__act(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_phase__act\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vor_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vor_tb___024root___timing_resume(vlSelf);
        Vor_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vor_tb___024root___eval_phase__nba(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_phase__nba\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vor_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vor_tb___024root___dump_triggers__nba(Vor_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vor_tb___024root___dump_triggers__act(Vor_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vor_tb___024root___eval(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vor_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/or_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vor_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/or_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vor_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vor_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vor_tb___024root___eval_debug_assertions(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_debug_assertions\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
