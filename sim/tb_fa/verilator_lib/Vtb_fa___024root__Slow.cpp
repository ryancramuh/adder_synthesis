// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fa.h for the primary calling header

#include "Vtb_fa__pch.h"
#include "Vtb_fa__Syms.h"
#include "Vtb_fa___024root.h"

void Vtb_fa___024root___ctor_var_reset(Vtb_fa___024root* vlSelf);

Vtb_fa___024root::Vtb_fa___024root(Vtb_fa__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fa___024root___ctor_var_reset(this);
}

void Vtb_fa___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_fa___024root::~Vtb_fa___024root() {
}
