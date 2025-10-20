// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fa.h for the primary calling header

#include "Vtb_fa__pch.h"
#include "Vtb_fa___024root.h"

VL_ATTR_COLD void Vtb_fa___024root___eval_static(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_static\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_fa___024root___eval_final(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_final\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa___024root___dump_triggers__stl(Vtb_fa___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fa___024root___eval_phase__stl(Vtb_fa___024root* vlSelf);

VL_ATTR_COLD void Vtb_fa___024root___eval_settle(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_settle\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_fa___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_fa.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_fa___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa___024root___dump_triggers__stl(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___dump_triggers__stl\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_fa___024root___stl_sequent__TOP__0(Vtb_fa___024root* vlSelf);
VL_ATTR_COLD void Vtb_fa___024root____Vm_traceActivitySetAll(Vtb_fa___024root* vlSelf);

VL_ATTR_COLD void Vtb_fa___024root___eval_stl(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_stl\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_fa___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_fa___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_fa___024root___stl_sequent__TOP__0(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___stl_sequent__TOP__0\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fa__DOT__DUT__DOT____VdfgRegularize_h9ba35e4a_0_0 
        = ((IData)(vlSelfRef.tb_fa__DOT__a) ^ (IData)(vlSelfRef.tb_fa__DOT__b));
}

VL_ATTR_COLD void Vtb_fa___024root___eval_triggers__stl(Vtb_fa___024root* vlSelf);

VL_ATTR_COLD bool Vtb_fa___024root___eval_phase__stl(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_phase__stl\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fa___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_fa___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa___024root___dump_triggers__act(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___dump_triggers__act\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa___024root___dump_triggers__nba(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___dump_triggers__nba\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fa___024root____Vm_traceActivitySetAll(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root____Vm_traceActivitySetAll\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_fa___024root___ctor_var_reset(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___ctor_var_reset\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_fa__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->tb_fa__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->tb_fa__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->tb_fa__DOT__DUT__DOT____VdfgRegularize_h9ba35e4a_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__tb_fa__DOT__a__v0 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__b__v0 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__cin__v0 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__a__v1 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__b__v1 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__cin__v1 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__a__v2 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__b__v2 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__cin__v2 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__a__v3 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__b__v3 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__cin__v3 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__a__v4 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__b__v4 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__cin__v4 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__a__v5 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__b__v5 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__cin__v5 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__a__v6 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__b__v6 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__cin__v6 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__a__v7 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__b__v7 = 0;
    vlSelf->__VdlySet__tb_fa__DOT__cin__v7 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
