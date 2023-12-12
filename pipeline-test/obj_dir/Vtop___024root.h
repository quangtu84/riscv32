// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        CData/*0:0*/ top__DOT__singleCycle__DOT__id_reset_n;
        CData/*0:0*/ top__DOT__singleCycle__DOT__ex_reset_n;
        CData/*0:0*/ top__DOT__singleCycle__DOT__mem_reset_n;
        CData/*0:0*/ top__DOT__singleCycle__DOT__wb_reset_n;
        CData/*1:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__wb_sel_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__mem_wren_o;
        CData/*2:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__mem_op_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__op_b_sel_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__op_a_sel_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__alu_op_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__rd_wren_o;
        CData/*1:0*/ top__DOT__singleCycle__DOT____Vcellout__mem_reg1__wb_sel_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__mem_reg1__mem_wren_o;
        CData/*2:0*/ top__DOT__singleCycle__DOT____Vcellout__mem_reg1__mem_op_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__mem_reg1__rd_wren_o;
        CData/*1:0*/ top__DOT__singleCycle__DOT____Vcellout__wb_reg1__wb_sel_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__wb_reg1__rd_wren_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__pc_enable_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__wb_enable_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__mem_enable_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__ex_enable_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__id_enable_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__brcomp1__br_sel_o;
        CData/*1:0*/ top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__wb_sel_o;
        CData/*2:0*/ top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__mem_op_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__alu_op_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__mem_wren_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__op_b_sel_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__op_a_sel_o;
        CData/*0:0*/ top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__rd_wren_o;
        CData/*3:0*/ top__DOT__singleCycle__DOT__lsu1__DOT____Vxrand_h96ff575f__0;
        IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__input_peri;
        IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1;
        IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2;
        IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3;
        IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data;
        CData/*3:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__mask;
        CData/*0:0*/ top__DOT__singleCycle__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1;
        CData/*0:0*/ top__DOT__singleCycle__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__0;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        VL_IN(io_sw_i,31,0);
        VL_OUT(io_lcd_o,31,0);
        VL_OUT(io_ledg_o,31,0);
        VL_OUT(io_ledr_o,31,0);
        VL_OUT(io_hex0_o,31,0);
        VL_OUT(io_hex1_o,31,0);
        VL_OUT(io_hex2_o,31,0);
        VL_OUT(io_hex3_o,31,0);
        VL_OUT(io_hex4_o,31,0);
        VL_OUT(io_hex5_o,31,0);
        VL_OUT(io_hex6_o,31,0);
        VL_OUT(io_hex7_o,31,0);
        IData/*31:0*/ top__DOT__singleCycle__DOT__ex_alu_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__mem_alu_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__wb_alu_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__id_reg1__pc_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__id_reg1__instr_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__rs2_data_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__rs1_data_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__pc_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__ex_reg1__instr_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__mem_reg1__imm_o;
    };
    struct {
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__mem_reg1__rs2_data_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__mem_reg1__pc_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__mem_reg1__instr_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__wb_reg1__ld_data_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__wb_reg1__imm_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__wb_reg1__pc_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__wb_reg1__instr_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__immgen1__imm_o;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vcellout__pc_register__value_o;
        VlWide<4>/*127:0*/ top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT____Vcellinp__multiplexer__bus_i;
        VlWide<4>/*127:0*/ top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT____Vcellinp__multiplexer__bus_i;
        VlWide<4>/*127:0*/ top__DOT__singleCycle__DOT__mul_wb_data__DOT____Vcellinp__multiplexer__bus_i;
        QData/*63:0*/ top__DOT__singleCycle__DOT__mul_nxt_pc__DOT____Vcellinp__multiplexer__bus_i;
        QData/*63:0*/ top__DOT__singleCycle__DOT__mult_operand_a__DOT____Vcellinp__multiplexer__bus_i;
        QData/*63:0*/ top__DOT__singleCycle__DOT__mult_operand_b__DOT____Vcellinp__multiplexer__bus_i;
        VlUnpacked<CData/*0:0*/, 4> top__DOT__singleCycle__DOT__enable;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__singleCycle__DOT__instr;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__singleCycle__DOT__pc;
        VlUnpacked<CData/*0:0*/, 1> top__DOT__singleCycle__DOT__pc_enable;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__singleCycle__DOT__pc_IF_four;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__singleCycle__DOT__pc_WB_four;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__singleCycle__DOT__nxt_pc;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__singleCycle__DOT__rs1_data;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__singleCycle__DOT__rs2_data;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__singleCycle__DOT__rs1_data_wb;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__singleCycle__DOT__rs2_data_wb;
        VlUnpacked<CData/*4:0*/, 2> top__DOT__singleCycle__DOT__rs1_addr;
        VlUnpacked<CData/*4:0*/, 2> top__DOT__singleCycle__DOT__rs2_addr;
        VlUnpacked<CData/*4:0*/, 3> top__DOT__singleCycle__DOT__rd_addr;
        VlUnpacked<CData/*0:0*/, 4> top__DOT__singleCycle__DOT__rd_wren;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__singleCycle__DOT__imm;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__singleCycle__DOT__alu_op;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__singleCycle__DOT__op_a_sel;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__singleCycle__DOT__op_b_sel;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__singleCycle__DOT__operand_a;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__singleCycle__DOT__operand_b;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__singleCycle__DOT__mem_op;
        VlUnpacked<CData/*0:0*/, 3> top__DOT__singleCycle__DOT__mem_wren;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__singleCycle__DOT__ld_data;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__singleCycle__DOT__wb_data;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__singleCycle__DOT__wb_sel;
        VlUnpacked<CData/*0:0*/, 1> top__DOT__singleCycle__DOT__br_sel;
        VlUnpacked<IData/*31:0*/, 4096> top__DOT__singleCycle__DOT__inst_memory1__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__singleCycle__DOT__regfile1__DOT__memory;
        VlUnpacked<IData/*31:0*/, 256> top__DOT__singleCycle__DOT__lsu1__DOT__memory;
        VlUnpacked<IData/*31:0*/, 64> top__DOT__singleCycle__DOT__lsu1__DOT__output_peri;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__singleCycle__DOT__mul_nxt_pc__DOT__multiplexer__DOT__input_array;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__singleCycle__DOT__mult_operand_a__DOT__multiplexer__DOT__input_array;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__singleCycle__DOT__mult_operand_b__DOT__multiplexer__DOT__input_array;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
