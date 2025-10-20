// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fa.h for the primary calling header

#include "Vtb_fa__pch.h"
#include "Vtb_fa___024root.h"

VL_ATTR_COLD void Vtb_fa___024root___eval_initial__TOP(Vtb_fa___024root* vlSelf);
VlCoroutine Vtb_fa___024root___eval_initial__TOP__Vtiming__0(Vtb_fa___024root* vlSelf);

void Vtb_fa___024root___eval_initial(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_initial\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fa___024root___eval_initial__TOP(vlSelf);
    Vtb_fa___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_fa___024root___eval_initial__TOP__Vtiming__0(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_fa.sv", 
                                             22);
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v0 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v0 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_fa.sv", 
                                             30);
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v1 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v1 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_fa.sv", 
                                             38);
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v2 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v2 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v2 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_fa.sv", 
                                             46);
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v3 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v3 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v3 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_fa.sv", 
                                             54);
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v4 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v4 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v4 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_fa.sv", 
                                             62);
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v5 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v5 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v5 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_fa.sv", 
                                             70);
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v6 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v6 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v6 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_fa.sv", 
                                             77);
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v7 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v7 = 1U;
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v7 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_fa.sv", 
                                             84);
        VL_FINISH_MT("tb_fa.sv", 84, "");
    }
}

void Vtb_fa___024root___eval_act(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_act\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_fa___024root___nba_sequent__TOP__0(Vtb_fa___024root* vlSelf);

void Vtb_fa___024root___eval_nba(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_nba\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fa___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_fa___024root___nba_sequent__TOP__0(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___nba_sequent__TOP__0\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_fa__DOT__cin__v0) {
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v0 = 0U;
        vlSelfRef.tb_fa__DOT__cin = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__cin__v1) {
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v1 = 0U;
        vlSelfRef.tb_fa__DOT__cin = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__cin__v2) {
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v2 = 0U;
        vlSelfRef.tb_fa__DOT__cin = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__cin__v3) {
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v3 = 0U;
        vlSelfRef.tb_fa__DOT__cin = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__cin__v4) {
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v4 = 0U;
        vlSelfRef.tb_fa__DOT__cin = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__cin__v5) {
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v5 = 0U;
        vlSelfRef.tb_fa__DOT__cin = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__cin__v6) {
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v6 = 0U;
        vlSelfRef.tb_fa__DOT__cin = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__cin__v7) {
        vlSelfRef.__VdlySet__tb_fa__DOT__cin__v7 = 0U;
        vlSelfRef.tb_fa__DOT__cin = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__a__v0) {
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v0 = 0U;
        vlSelfRef.tb_fa__DOT__a = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__a__v1) {
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v1 = 0U;
        vlSelfRef.tb_fa__DOT__a = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__a__v2) {
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v2 = 0U;
        vlSelfRef.tb_fa__DOT__a = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__a__v3) {
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v3 = 0U;
        vlSelfRef.tb_fa__DOT__a = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__a__v4) {
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v4 = 0U;
        vlSelfRef.tb_fa__DOT__a = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__a__v5) {
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v5 = 0U;
        vlSelfRef.tb_fa__DOT__a = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__a__v6) {
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v6 = 0U;
        vlSelfRef.tb_fa__DOT__a = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__a__v7) {
        vlSelfRef.__VdlySet__tb_fa__DOT__a__v7 = 0U;
        vlSelfRef.tb_fa__DOT__a = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__b__v0) {
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v0 = 0U;
        vlSelfRef.tb_fa__DOT__b = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__b__v1) {
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v1 = 0U;
        vlSelfRef.tb_fa__DOT__b = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__b__v2) {
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v2 = 0U;
        vlSelfRef.tb_fa__DOT__b = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__b__v3) {
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v3 = 0U;
        vlSelfRef.tb_fa__DOT__b = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__b__v4) {
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v4 = 0U;
        vlSelfRef.tb_fa__DOT__b = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__b__v5) {
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v5 = 0U;
        vlSelfRef.tb_fa__DOT__b = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__b__v6) {
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v6 = 0U;
        vlSelfRef.tb_fa__DOT__b = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_fa__DOT__b__v7) {
        vlSelfRef.__VdlySet__tb_fa__DOT__b__v7 = 0U;
        vlSelfRef.tb_fa__DOT__b = 1U;
    }
    vlSelfRef.tb_fa__DOT__DUT__DOT____VdfgRegularize_h9ba35e4a_0_0 
        = ((IData)(vlSelfRef.tb_fa__DOT__a) ^ (IData)(vlSelfRef.tb_fa__DOT__b));
}

void Vtb_fa___024root___timing_resume(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___timing_resume\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fa___024root___eval_triggers__act(Vtb_fa___024root* vlSelf);

bool Vtb_fa___024root___eval_phase__act(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_phase__act\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fa___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_fa___024root___timing_resume(vlSelf);
        Vtb_fa___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fa___024root___eval_phase__nba(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_phase__nba\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fa___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa___024root___dump_triggers__nba(Vtb_fa___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fa___024root___dump_triggers__act(Vtb_fa___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fa___024root___eval(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_fa___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_fa.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_fa___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_fa.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_fa___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_fa___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fa___024root___eval_debug_assertions(Vtb_fa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root___eval_debug_assertions\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
