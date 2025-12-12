// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor_tb.h for the primary calling header

#include "Vor_tb__pch.h"
#include "Vor_tb__Syms.h"
#include "Vor_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vor_tb___024root___eval_initial__TOP__Vtiming__0(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x642f6f72U;
    __Vtemp_1[2U] = 0x7663U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.or_tb__DOT__in1 = 0U;
    vlSelfRef.or_tb__DOT__in2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/or_tb.v", 
                                         11);
    vlSelfRef.or_tb__DOT__in1 = 0U;
    vlSelfRef.or_tb__DOT__in2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/or_tb.v", 
                                         13);
    vlSelfRef.or_tb__DOT__in1 = 1U;
    vlSelfRef.or_tb__DOT__in2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/or_tb.v", 
                                         15);
    vlSelfRef.or_tb__DOT__in1 = 1U;
    vlSelfRef.or_tb__DOT__in2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/or_tb.v", 
                                         17);
    VL_FINISH_MT("tb/or_tb.v", 19, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vor_tb___024root___dump_triggers__act(Vor_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vor_tb___024root___eval_triggers__act(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___eval_triggers__act\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.or_tb__DOT__in1) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__or_tb__DOT__in1__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.or_tb__DOT__in2) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__or_tb__DOT__in2__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.or_tb__DOT__out) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__or_tb__DOT__out__0)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__or_tb__DOT__in1__0 
        = vlSelfRef.or_tb__DOT__in1;
    vlSelfRef.__Vtrigprevexpr___TOP__or_tb__DOT__in2__0 
        = vlSelfRef.or_tb__DOT__in2;
    vlSelfRef.__Vtrigprevexpr___TOP__or_tb__DOT__out__0 
        = vlSelfRef.or_tb__DOT__out;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vor_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vor_tb___024root___nba_sequent__TOP__0(Vor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_tb___024root___nba_sequent__TOP__0\n"); );
    Vor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)))))) {
        VL_WRITEF_NX("Time=%bt | in1=%b, in2=%b, out=%b\n",0,
                     64,VL_TIME_UNITED_Q(1),1,(IData)(vlSelfRef.or_tb__DOT__in1),
                     1,vlSelfRef.or_tb__DOT__in2,1,
                     (IData)(vlSelfRef.or_tb__DOT__out));
    }
}
