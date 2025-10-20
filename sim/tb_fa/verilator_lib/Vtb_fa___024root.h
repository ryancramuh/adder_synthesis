// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fa.h for the primary calling header

#ifndef VERILATED_VTB_FA___024ROOT_H_
#define VERILATED_VTB_FA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fa__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fa___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fa__DOT__a;
    CData/*0:0*/ tb_fa__DOT__b;
    CData/*0:0*/ tb_fa__DOT__cin;
    CData/*0:0*/ tb_fa__DOT__DUT__DOT____VdfgRegularize_h9ba35e4a_0_0;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__a__v0;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__b__v0;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__cin__v0;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__a__v1;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__b__v1;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__cin__v1;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__a__v2;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__b__v2;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__cin__v2;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__a__v3;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__b__v3;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__cin__v3;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__a__v4;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__b__v4;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__cin__v4;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__a__v5;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__b__v5;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__cin__v5;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__a__v6;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__b__v6;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__cin__v6;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__a__v7;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__b__v7;
    CData/*0:0*/ __VdlySet__tb_fa__DOT__cin__v7;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fa__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fa___024root(Vtb_fa__Syms* symsp, const char* v__name);
    ~Vtb_fa___024root();
    VL_UNCOPYABLE(Vtb_fa___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
