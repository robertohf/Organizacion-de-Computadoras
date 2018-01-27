// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS32SOC.h for the primary calling header

#include "VMIPS32SOC.h"        // For This
#include "VMIPS32SOC__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS32SOC) {
    VMIPS32SOC__Syms* __restrict vlSymsp = __VlSymsp = new VMIPS32SOC__Syms(this, name());
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMIPS32SOC::__Vconfigure(VMIPS32SOC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS32SOC::~VMIPS32SOC() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VMIPS32SOC::eval() {
    VMIPS32SOC__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VMIPS32SOC::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VMIPS32SOC::_eval_initial_loop(VMIPS32SOC__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VMIPS32SOC::_sequent__TOP__1(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_sequent__TOP__1\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__MIPS32SOC__DOT__RegisterFile__DOT__registeries__v0,4,0);
    //char	__VpadToAlign5[3];
    VL_SIG(__Vdlyvval__MIPS32SOC__DOT__RegisterFile__DOT__registeries__v0,31,0);
    // Body
    // ALWAYS at RegisterFile.v:14
    __Vdlyvval__MIPS32SOC__DOT__RegisterFile__DOT__registeries__v0 
	= ((IData)(vlTOPp->write_enable) ? vlTOPp->MIPS32SOC__DOT__result
	    : vlTOPp->MIPS32SOC__DOT__RegisterFile__DOT__registeries
	   [vlTOPp->write_address]);
    __Vdlyvdim0__MIPS32SOC__DOT__RegisterFile__DOT__registeries__v0 
	= vlTOPp->write_address;
    // ALWAYSPOST at RegisterFile.v:15
    vlTOPp->MIPS32SOC__DOT__RegisterFile__DOT__registeries[__Vdlyvdim0__MIPS32SOC__DOT__RegisterFile__DOT__registeries__v0] 
	= __Vdlyvval__MIPS32SOC__DOT__RegisterFile__DOT__registeries__v0;
}

void VMIPS32SOC::_initial__TOP__2(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_initial__TOP__2\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at RegisterFile.v:21
    vlTOPp->MIPS32SOC__DOT__RegisterFile__DOT__registeries[0U] = 5U;
    vlTOPp->MIPS32SOC__DOT__RegisterFile__DOT__registeries[1U] = 0xaU;
}

VL_INLINE_OPT void VMIPS32SOC::_combo__TOP__3(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_combo__TOP__3\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPS32SOC__DOT__read_data1 = vlTOPp->MIPS32SOC__DOT__RegisterFile__DOT__registeries
	[vlTOPp->read_address1];
    vlTOPp->MIPS32SOC__DOT__read_data2 = vlTOPp->MIPS32SOC__DOT__RegisterFile__DOT__registeries
	[vlTOPp->read_address2];
}

void VMIPS32SOC::_settle__TOP__4(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_settle__TOP__4\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPS32SOC__DOT__read_data1 = vlTOPp->MIPS32SOC__DOT__RegisterFile__DOT__registeries
	[vlTOPp->read_address1];
    vlTOPp->MIPS32SOC__DOT__read_data2 = vlTOPp->MIPS32SOC__DOT__RegisterFile__DOT__registeries
	[vlTOPp->read_address2];
    // ALWAYS at Alu.v:12
    vlTOPp->MIPS32SOC__DOT__result = ((8U & (IData)(vlTOPp->func))
				       ? 0U : ((4U 
						& (IData)(vlTOPp->func))
					        ? 0U
					        : (
						   (2U 
						    & (IData)(vlTOPp->func))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->func))
						     ? 
						    (vlTOPp->MIPS32SOC__DOT__read_data1 
						     | vlTOPp->MIPS32SOC__DOT__read_data2)
						     : 
						    (vlTOPp->MIPS32SOC__DOT__read_data1 
						     & vlTOPp->MIPS32SOC__DOT__read_data2))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->func))
						     ? 
						    (vlTOPp->MIPS32SOC__DOT__read_data1 
						     - vlTOPp->MIPS32SOC__DOT__read_data2)
						     : 
						    (vlTOPp->MIPS32SOC__DOT__read_data1 
						     + vlTOPp->MIPS32SOC__DOT__read_data2)))));
}

VL_INLINE_OPT void VMIPS32SOC::_combo__TOP__5(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_combo__TOP__5\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Alu.v:12
    vlTOPp->MIPS32SOC__DOT__result = ((8U & (IData)(vlTOPp->func))
				       ? 0U : ((4U 
						& (IData)(vlTOPp->func))
					        ? 0U
					        : (
						   (2U 
						    & (IData)(vlTOPp->func))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->func))
						     ? 
						    (vlTOPp->MIPS32SOC__DOT__read_data1 
						     | vlTOPp->MIPS32SOC__DOT__read_data2)
						     : 
						    (vlTOPp->MIPS32SOC__DOT__read_data1 
						     & vlTOPp->MIPS32SOC__DOT__read_data2))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->func))
						     ? 
						    (vlTOPp->MIPS32SOC__DOT__read_data1 
						     - vlTOPp->MIPS32SOC__DOT__read_data2)
						     : 
						    (vlTOPp->MIPS32SOC__DOT__read_data1 
						     + vlTOPp->MIPS32SOC__DOT__read_data2)))));
    vlTOPp->isZero = (0U == vlTOPp->MIPS32SOC__DOT__result);
}

void VMIPS32SOC::_settle__TOP__6(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_settle__TOP__6\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->isZero = (0U == vlTOPp->MIPS32SOC__DOT__result);
}

void VMIPS32SOC::_eval(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_eval\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VMIPS32SOC::_eval_initial(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_eval_initial\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
}

void VMIPS32SOC::final() {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::final\n"); );
    // Variables
    VMIPS32SOC__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMIPS32SOC::_eval_settle(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_eval_settle\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
}

VL_INLINE_OPT QData VMIPS32SOC::_change_request(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_change_request\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VMIPS32SOC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    read_address1 = VL_RAND_RESET_I(5);
    read_address2 = VL_RAND_RESET_I(5);
    write_address = VL_RAND_RESET_I(5);
    func = VL_RAND_RESET_I(4);
    write_enable = VL_RAND_RESET_I(1);
    isZero = VL_RAND_RESET_I(1);
    MIPS32SOC__DOT__result = VL_RAND_RESET_I(32);
    MIPS32SOC__DOT__read_data1 = VL_RAND_RESET_I(32);
    MIPS32SOC__DOT__read_data2 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    MIPS32SOC__DOT__RegisterFile__DOT__registeries[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
}

void VMIPS32SOC::_configure_coverage(VMIPS32SOC__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS32SOC::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
