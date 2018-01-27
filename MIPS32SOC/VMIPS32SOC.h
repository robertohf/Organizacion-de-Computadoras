// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMIPS32SOC_H_
#define _VMIPS32SOC_H_

#include "verilated.h"
class VMIPS32SOC__Syms;

//----------

VL_MODULE(VMIPS32SOC) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(read_address1,4,0);
    VL_IN8(read_address2,4,0);
    VL_IN8(write_address,4,0);
    VL_IN8(func,3,0);
    VL_IN8(write_enable,0,0);
    VL_OUT8(isZero,0,0);
    //char	__VpadToAlign7[1];
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG(MIPS32SOC__DOT__result,31,0);
    VL_SIG(MIPS32SOC__DOT__read_data1,31,0);
    VL_SIG(MIPS32SOC__DOT__read_data2,31,0);
    VL_SIG(MIPS32SOC__DOT__RegisterFile__DOT__registeries[32],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    //char	__VpadToAlign157[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign164[4];
    VMIPS32SOC__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VMIPS32SOC& operator= (const VMIPS32SOC&);	///< Copying not allowed
    VMIPS32SOC(const VMIPS32SOC&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VMIPS32SOC(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMIPS32SOC();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VMIPS32SOC__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMIPS32SOC__Syms* symsp, bool first);
  private:
    static QData	_change_request(VMIPS32SOC__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__3(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void	_combo__TOP__5(VMIPS32SOC__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VMIPS32SOC__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void	_eval_initial(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void	_eval_settle(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void	_initial__TOP__2(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(VMIPS32SOC__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
