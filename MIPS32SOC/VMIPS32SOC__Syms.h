// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VMIPS32SOC__Syms_H_
#define _VMIPS32SOC__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VMIPS32SOC.h"

// SYMS CLASS
class VMIPS32SOC__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VMIPS32SOC*                    TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    VMIPS32SOC__Syms(VMIPS32SOC* topp, const char* namep);
    ~VMIPS32SOC__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
