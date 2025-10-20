// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fa__Syms.h"


VL_ATTR_COLD void Vtb_fa___024root__trace_init_sub__TOP__0(Vtb_fa___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root__trace_init_sub__TOP__0\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_fa___024root__trace_init_top(Vtb_fa___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root__trace_init_top\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fa___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_fa___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_fa___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_fa___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_fa___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_fa___024root__trace_register(Vtb_fa___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root__trace_register\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_fa___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_fa___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_fa___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_fa___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_fa___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root__trace_const_0\n"); );
    // Init
    Vtb_fa___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fa___024root*>(voidSelf);
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_fa___024root__trace_full_0_sub_0(Vtb_fa___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_fa___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root__trace_full_0\n"); );
    // Init
    Vtb_fa___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fa___024root*>(voidSelf);
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_fa___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_fa___024root__trace_full_0_sub_0(Vtb_fa___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fa___024root__trace_full_0_sub_0\n"); );
    Vtb_fa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_fa__DOT__a));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_fa__DOT__b));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_fa__DOT__cin));
    bufp->fullBit(oldp+4,(((IData)(vlSelfRef.tb_fa__DOT__DUT__DOT____VdfgRegularize_h9ba35e4a_0_0) 
                           ^ (IData)(vlSelfRef.tb_fa__DOT__cin))));
    bufp->fullBit(oldp+5,((((IData)(vlSelfRef.tb_fa__DOT__a) 
                            & (IData)(vlSelfRef.tb_fa__DOT__b)) 
                           | ((IData)(vlSelfRef.tb_fa__DOT__cin) 
                              & (IData)(vlSelfRef.tb_fa__DOT__DUT__DOT____VdfgRegularize_h9ba35e4a_0_0)))));
}
