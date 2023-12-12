// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+269,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+270,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+271,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+272,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+273,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+274,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+275,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+276,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+277,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+278,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+279,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+280,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+269,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+270,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+271,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+272,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+273,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+274,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+275,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+276,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+277,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+278,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+279,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+280,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("singleCycle ");
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+269,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+270,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+271,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+272,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+273,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+274,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+275,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+276,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+277,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+278,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+279,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+280,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+283,"PL_IF",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+284,"PL_ID",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+285,"PL_EX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+286,"PL_MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+287,"PL_WB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+193,"id_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+194,"ex_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+195,"mem_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+196,"wb_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+197+i*1,"enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+6+i*1,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+201+i*1,"pc_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+11+i*1,"pc_IF_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+12+i*1,"pc_WB_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+4), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+202+i*1,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+13+i*1,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+15+i*1,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+203+i*1,"rs1_data_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+2), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+204+i*1,"rs2_data_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+2), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+18+i*1,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 4,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+20+i*1,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+22+i*1,"rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+2), 4,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+25+i*1,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+29+i*1,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+2), 31,0);
    }
    tracep->declBus(c+205,"ex_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"mem_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"wb_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+34+i*1,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+36+i*1,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+38+i*1,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+206+i*1,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+2), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+207+i*1,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+2), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+40+i*1,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+43+i*1,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+182+i*1,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+3), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+208+i*1,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+4), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+46+i*1,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+209+i*1,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+2));
    }
    tracep->declBus(c+50,"forward_rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,"forward_rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("adder_pc_IF_four ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+52,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+289,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder_pc_WB_four ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+54,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+289,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+210,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+211,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+205,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("brcomp1 ");
    tracep->declBus(c+57,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+212,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+213,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+214,"br_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+58,"funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+59,"funct7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+60,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+215,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+184,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctr_unit1 ");
    tracep->declBus(c+61,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+62,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+66,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+67,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+68,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+69,"funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+70,"funct7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_reg1 ");
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+61,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+74,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+75,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+76,"op_a_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"op_b_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+78,"mem_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+79,"mem_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+80,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+81,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+85,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+86,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+87,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+89,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+90,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forward_u1 ");
    tracep->declBit(c+92,"mem_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"wb_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+94,"mem_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+95,"wb_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+96,"ex_rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+97,"ex_rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+50,"forward_a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+51,"forward_b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_detect1 ");
    tracep->declBus(c+57,"ex_instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+98,"ex_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"mem_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"wb_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"br_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+99,"ex_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+94,"mem_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+95,"wb_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+100,"id_rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+101,"id_rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+218,"pc_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"id_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"ex_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"mem_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"wb_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"id_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"ex_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"mem_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"wb_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"hazard_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+103,"hazard_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+104,"hazard_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_reg1 ");
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+105,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen1 ");
    tracep->declBus(c+57,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_memory1 ");
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu1 ");
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+32,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+269,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"mem_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+185,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+270,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+271,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+272,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+273,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+274,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+275,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+276,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+277,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+278,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+279,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+280,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+224,"input_peri",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,"dataout_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,"dataout_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,"dataout_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,"temp_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,"mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_reg1 ");
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+57,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+213,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+98,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+117,"imm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+205,"alu_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"mem_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+119,"mem_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+120,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+121,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+124,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+125,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+127,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+128,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul_nxt_pc ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+129,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+205,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+217,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+228,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("multiplexer ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+285,"CHANNELS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+229,"bus_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+217,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+228,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+231+i*1,"input_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mul_wb_data ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+33,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+186,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"in2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"in3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+187,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("multiplexer ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+287,"CHANNELS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+233,"bus_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBus(c+132,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+187,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+237+i*1,"input_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_operand_a ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+212,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+133,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+188,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("multiplexer ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+285,"CHANNELS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+241,"bus_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+133,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+188,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+243+i*1,"input_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_operand_b ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+213,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+134,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+189,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("multiplexer ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+285,"CHANNELS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+245,"bus_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+134,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+189,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+247+i*1,"input_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_register ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+283,"INITIAL_VALUE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+250,"value_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"value_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile1 ");
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+101,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+95,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+138+i*1,"memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs1_data_wb_mux ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+170,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+170,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"in2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+251,"in3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+190,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("multiplexer ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+287,"CHANNELS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+252,"bus_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBus(c+50,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+190,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+256+i*1,"input_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rs2_data_wb_mux ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+171,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+171,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"in2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+251,"in3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+191,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("multiplexer ");
    tracep->declBus(c+288,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+287,"CHANNELS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+260,"bus_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBus(c+51,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+191,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+264+i*1,"input_array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_reg1 ");
    tracep->declBit(c+281,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+172,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+173,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+92,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+174,"imm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"alu_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"ld_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+175,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+176,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+177,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+178,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+179,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+181,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__instr[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__instr[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__instr[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__instr[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__instr[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__pc[0]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__singleCycle__DOT__pc[1]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__pc[2]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__pc[3]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__pc[4]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__pc_IF_four[0]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__pc_WB_four[0]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__rs1_data[0]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__rs1_data[1]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__rs2_data[0]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__rs2_data[1]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__rs2_data[2]),32);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__rs1_addr[0]),5);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__rs1_addr[1]),5);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__rs2_addr[0]),5);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__rs2_addr[1]),5);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__rd_addr[0]),5);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__rd_addr[1]),5);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__rd_addr[2]),5);
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__rd_wren[0]));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__rd_wren[1]));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__rd_wren[2]));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__rd_wren[3]));
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__imm[0]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__imm[1]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__imm[2]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__mem_alu_data),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__wb_alu_data),32);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__alu_op[0]),4);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__alu_op[1]),4);
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel[0]));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel[1]));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel[0]));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel[1]));
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__mem_op[0]),3);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__mem_op[1]),3);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__mem_op[2]),3);
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__mem_wren[0]));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__mem_wren[1]));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__mem_wren[2]));
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__wb_sel[0]),2);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__wb_sel[1]),2);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__wb_sel[2]),2);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__wb_sel[3]),2);
    bufp->fullCData(oldp+50,((((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                [2U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                        [1U])) & (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                  [1U] 
                                                  == 
                                                  vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                                  [1U]))
                               ? 2U : (((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                         [3U] & (0U 
                                                 != 
                                                 vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                 [2U])) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                           [2U] == 
                                           vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                           [1U])) ? 3U
                                        : 0U))),2);
    bufp->fullCData(oldp+51,((((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                [2U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                        [1U])) & (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                  [1U] 
                                                  == 
                                                  vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                                  [1U]))
                               ? 2U : (((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                         [3U] & (0U 
                                                 != 
                                                 vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                 [2U])) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                           [2U] == 
                                           vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                           [1U])) ? 3U
                                        : 0U))),2);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__pc
                             [0U]),32);
    bufp->fullIData(oldp+53,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc
                              [0U])),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__pc
                             [4U]),32);
    bufp->fullIData(oldp+55,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc
                              [4U])),32);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__alu_op
                             [1U]),4);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__instr
                             [2U]),32);
    bufp->fullCData(oldp+58,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                    [2U] >> 0xcU))),3);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr
                                       [2U] >> 2U))),5);
    bufp->fullBit(oldp+60,(((7U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                          [2U] >> 0xcU))) 
                            | (6U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                            [2U] >> 0xcU))))));
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__instr
                             [1U]),32);
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__rd_wren_o));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__op_a_sel_o));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__op_b_sel_o));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__mem_wren_o));
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__alu_op_o),4);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__mem_op_o),3);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__wb_sel_o),2);
    bufp->fullCData(oldp+69,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                    [1U] >> 0xcU))),3);
    bufp->fullCData(oldp+70,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr
                                       [1U] >> 2U))),5);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__singleCycle__DOT__pc
                             [1U]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__singleCycle__DOT__rs1_data
                             [0U]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__singleCycle__DOT__rs2_data
                             [0U]),32);
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__singleCycle__DOT__rd_wren
                           [0U]));
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__singleCycle__DOT__alu_op
                             [0U]),4);
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel
                           [0U]));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel
                           [0U]));
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__singleCycle__DOT__mem_op
                             [0U]),3);
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__singleCycle__DOT__mem_wren
                           [0U]));
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__singleCycle__DOT__wb_sel
                             [0U]),2);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__instr_o),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__pc_o),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__rs1_data_o),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__rs2_data_o),32);
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__rd_wren_o));
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__alu_op_o),4);
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__op_a_sel_o));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__op_b_sel_o));
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__mem_op_o),3);
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__mem_wren_o));
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__wb_sel_o),2);
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__singleCycle__DOT__rd_wren
                           [2U]));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__singleCycle__DOT__rd_wren
                           [3U]));
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__singleCycle__DOT__rd_addr
                             [1U]),5);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__singleCycle__DOT__rd_addr
                             [2U]),5);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                             [1U]),5);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                             [1U]),5);
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__singleCycle__DOT__rd_wren
                           [1U]));
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__singleCycle__DOT__rd_addr
                             [0U]),5);
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                              [0U]),5);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                              [0U]),5);
    bufp->fullBit(oldp+102,(((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                              [3U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                      [2U])) & ((vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                 [2U] 
                                                 == 
                                                 vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                                 [0U]) 
                                                | (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                   [2U] 
                                                   == 
                                                   vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                                   [0U])))));
    bufp->fullBit(oldp+103,((((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                               [1U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                       [0U])) & (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__instr
                                                     [2U] 
                                                     >> 2U)))) 
                             & ((vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                 [0U] == vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                 [0U]) | (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                          [0U] == vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                          [0U])))));
    bufp->fullBit(oldp+104,((((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                               [1U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                       [0U])) & (0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__instr
                                                     [2U] 
                                                     >> 2U)))) 
                             & ((vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                 [0U] == vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                 [0U]) | (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                          [0U] == vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                          [0U])))));
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__singleCycle__DOT__instr
                              [0U]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__id_reg1__instr_o),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__id_reg1__pc_o),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__immgen1__imm_o),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__singleCycle__DOT__inst_memory1__DOT__memory
                              [(0xfffU & (vlSelf->top__DOT__singleCycle__DOT__pc
                                          [0U] >> 2U))]),32);
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__singleCycle__DOT__mem_wren
                            [2U]));
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__singleCycle__DOT__rs2_data
                              [2U]),32);
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__singleCycle__DOT__mem_op
                              [2U]),3);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2),32);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask),4);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__singleCycle__DOT__pc
                              [2U]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__singleCycle__DOT__imm
                              [0U]),32);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__singleCycle__DOT__mem_op
                              [1U]),3);
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__singleCycle__DOT__mem_wren
                            [1U]));
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__singleCycle__DOT__wb_sel
                              [1U]),2);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__instr_o),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__pc_o),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__rs2_data_o),32);
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__rd_wren_o));
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__imm_o),32);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__mem_op_o),3);
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__mem_wren_o));
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__wb_sel_o),2);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__singleCycle__DOT__pc_IF_four
                              [0U]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__singleCycle__DOT__pc_WB_four
                              [0U]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__singleCycle__DOT__imm
                              [2U]),32);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__singleCycle__DOT__wb_sel
                              [3U]),2);
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel
                            [1U]));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel
                            [1U]));
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__pc_register__value_o),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory
                              [vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                              [0U]]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory
                              [vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                              [0U]]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[0]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[1]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[2]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[3]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[4]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[5]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[6]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[7]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[8]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[9]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[10]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[11]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[12]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[13]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[14]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[15]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[16]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[17]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[18]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[19]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[20]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[21]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[22]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[23]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[24]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[25]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[26]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[27]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[28]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[29]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[30]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[31]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__singleCycle__DOT__rs1_data
                              [1U]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__singleCycle__DOT__rs2_data
                              [1U]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__singleCycle__DOT__instr
                              [3U]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__singleCycle__DOT__pc
                              [3U]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__singleCycle__DOT__imm
                              [1U]),32);
    bufp->fullCData(oldp+175,(vlSelf->top__DOT__singleCycle__DOT__wb_sel
                              [2U]),2);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__instr_o),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__pc_o),32);
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__rd_wren_o));
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__imm_o),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__ld_data_o),32);
    bufp->fullCData(oldp+181,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__wb_sel_o),2);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__singleCycle__DOT__ld_data[0]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__singleCycle__DOT__ld_data[1]),32);
    bufp->fullBit(oldp+184,((((7U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                            [2U] >> 0xcU))) 
                              | (6U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                              [2U] 
                                              >> 0xcU))))
                              ? (vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb
                                 [0U] < vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb
                                 [0U]) : VL_LTS_III(32, 
                                                    vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb
                                                    [0U], 
                                                    vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb
                                                    [0U]))));
    bufp->fullIData(oldp+185,(((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__mem_op
                                          [2U] >> 2U)) 
                                      & (~ vlSelf->top__DOT__singleCycle__DOT__mem_wren
                                         [2U]))) ? 
                               ((0U == vlSelf->top__DOT__singleCycle__DOT__mem_op
                                 [2U]) ? ((((0x80U 
                                             & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                             ? 0xffffffU
                                             : 0U) 
                                           << 8U) | 
                                          (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                 : ((1U == vlSelf->top__DOT__singleCycle__DOT__mem_op
                                     [2U]) ? ((((0x8000U 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                                 ? 0xffffU
                                                 : 0U) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                     : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__singleCycle__DOT__ld_data
                              [1U]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array
                              [vlSelf->top__DOT__singleCycle__DOT__wb_sel
                              [3U]]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_a__DOT__multiplexer__DOT__input_array
                              [vlSelf->top__DOT__singleCycle__DOT__op_a_sel
                              [1U]]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_b__DOT__multiplexer__DOT__input_array
                              [vlSelf->top__DOT__singleCycle__DOT__op_b_sel
                              [1U]]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array
                              [(((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                  [2U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                          [1U])) & 
                                 (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                  [1U] == vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                  [1U])) ? 2U : (((
                                                   vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                                   [3U] 
                                                   & (0U 
                                                      != 
                                                      vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                      [2U])) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                     [2U] 
                                                     == 
                                                     vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                                     [1U]))
                                                  ? 3U
                                                  : 0U))]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array
                              [(((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                  [2U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                          [1U])) & 
                                 (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                  [1U] == vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                  [1U])) ? 2U : (((
                                                   vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                                   [3U] 
                                                   & (0U 
                                                      != 
                                                      vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                      [2U])) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                     [2U] 
                                                     == 
                                                     vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                                     [1U]))
                                                  ? 3U
                                                  : 0U))]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__singleCycle__DOT__ld_data
                              [0U]),32);
    bufp->fullBit(oldp+193,(vlSelf->top__DOT__singleCycle__DOT__id_reset_n));
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__singleCycle__DOT__ex_reset_n));
    bufp->fullBit(oldp+195,(vlSelf->top__DOT__singleCycle__DOT__mem_reset_n));
    bufp->fullBit(oldp+196,(vlSelf->top__DOT__singleCycle__DOT__wb_reset_n));
    bufp->fullBit(oldp+197,(vlSelf->top__DOT__singleCycle__DOT__enable[0]));
    bufp->fullBit(oldp+198,(vlSelf->top__DOT__singleCycle__DOT__enable[1]));
    bufp->fullBit(oldp+199,(vlSelf->top__DOT__singleCycle__DOT__enable[2]));
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__singleCycle__DOT__enable[3]));
    bufp->fullBit(oldp+201,(vlSelf->top__DOT__singleCycle__DOT__pc_enable[0]));
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__singleCycle__DOT__nxt_pc[0]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb[0]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb[0]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__singleCycle__DOT__ex_alu_data),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__singleCycle__DOT__operand_a[0]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__singleCycle__DOT__operand_b[0]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__singleCycle__DOT__wb_data[0]),32);
    bufp->fullBit(oldp+209,(vlSelf->top__DOT__singleCycle__DOT__br_sel[0]));
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__singleCycle__DOT__operand_a
                              [0U]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__singleCycle__DOT__operand_b
                              [0U]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb
                              [0U]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb
                              [0U]),32);
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__brcomp1__br_sel_o));
    bufp->fullBit(oldp+215,((vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb
                             [0U] == vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb
                             [0U])));
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__singleCycle__DOT__enable
                            [1U]));
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__singleCycle__DOT__br_sel
                            [0U]));
    bufp->fullBit(oldp+218,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__pc_enable_o));
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__id_enable_o));
    bufp->fullBit(oldp+220,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__ex_enable_o));
    bufp->fullBit(oldp+221,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__mem_enable_o));
    bufp->fullBit(oldp+222,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__wb_enable_o));
    bufp->fullBit(oldp+223,(vlSelf->top__DOT__singleCycle__DOT__enable
                            [0U]));
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data),32);
    bufp->fullBit(oldp+227,(vlSelf->top__DOT__singleCycle__DOT__enable
                            [2U]));
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__singleCycle__DOT__mul_nxt_pc__DOT__multiplexer__DOT__input_array
                              [vlSelf->top__DOT__singleCycle__DOT__br_sel
                              [0U]]),32);
    bufp->fullQData(oldp+229,(vlSelf->top__DOT__singleCycle__DOT__mul_nxt_pc__DOT____Vcellinp__multiplexer__bus_i),64);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__singleCycle__DOT__mul_nxt_pc__DOT__multiplexer__DOT__input_array[0]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__singleCycle__DOT__mul_nxt_pc__DOT__multiplexer__DOT__input_array[1]),32);
    bufp->fullWData(oldp+233,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT____Vcellinp__multiplexer__bus_i),128);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array[0]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array[1]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array[2]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array[3]),32);
    bufp->fullQData(oldp+241,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_a__DOT____Vcellinp__multiplexer__bus_i),64);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_a__DOT__multiplexer__DOT__input_array[0]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_a__DOT__multiplexer__DOT__input_array[1]),32);
    bufp->fullQData(oldp+245,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_b__DOT____Vcellinp__multiplexer__bus_i),64);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_b__DOT__multiplexer__DOT__input_array[0]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_b__DOT__multiplexer__DOT__input_array[1]),32);
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__singleCycle__DOT__pc_enable
                            [0U]));
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__singleCycle__DOT__nxt_pc
                              [0U]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__singleCycle__DOT__wb_data
                              [0U]),32);
    bufp->fullWData(oldp+252,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT____Vcellinp__multiplexer__bus_i),128);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array[0]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array[1]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array[2]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array[3]),32);
    bufp->fullWData(oldp+260,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT____Vcellinp__multiplexer__bus_i),128);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array[0]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array[1]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array[2]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array[3]),32);
    bufp->fullBit(oldp+268,(vlSelf->top__DOT__singleCycle__DOT__enable
                            [3U]));
    bufp->fullIData(oldp+269,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+270,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+271,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+272,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+273,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+274,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+275,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+276,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+277,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+278,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+279,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+280,(vlSelf->io_hex7_o),32);
    bufp->fullBit(oldp+281,(vlSelf->clk_i));
    bufp->fullBit(oldp+282,(vlSelf->rst_ni));
    bufp->fullIData(oldp+283,(0U),32);
    bufp->fullIData(oldp+284,(1U),32);
    bufp->fullIData(oldp+285,(2U),32);
    bufp->fullIData(oldp+286,(3U),32);
    bufp->fullIData(oldp+287,(4U),32);
    bufp->fullIData(oldp+288,(0x20U),32);
    bufp->fullIData(oldp+289,(4U),32);
}
