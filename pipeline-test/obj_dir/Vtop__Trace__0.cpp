// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__singleCycle__DOT__instr[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__instr[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__instr[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__instr[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__instr[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__pc[0]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__pc[1]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__singleCycle__DOT__pc[2]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__pc[3]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__pc[4]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__pc_IF_four[0]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__pc_WB_four[0]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__rs1_data[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__rs1_data[1]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__rs2_data[0]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__rs2_data[1]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__rs2_data[2]),32);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__rs1_addr[0]),5);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__rs1_addr[1]),5);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__rs2_addr[0]),5);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__rs2_addr[1]),5);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__rd_addr[0]),5);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__rd_addr[1]),5);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__rd_addr[2]),5);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__rd_wren[0]));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__rd_wren[1]));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__rd_wren[2]));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__rd_wren[3]));
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__imm[0]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__imm[1]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__imm[2]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__mem_alu_data),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__wb_alu_data),32);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__alu_op[0]),4);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__alu_op[1]),4);
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel[0]));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel[1]));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel[0]));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel[1]));
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__mem_op[0]),3);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__mem_op[1]),3);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__mem_op[2]),3);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__mem_wren[0]));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__mem_wren[1]));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__mem_wren[2]));
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__wb_sel[0]),2);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__wb_sel[1]),2);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__wb_sel[2]),2);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__wb_sel[3]),2);
        bufp->chgCData(oldp+49,((((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                   [2U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                           [1U])) & 
                                  (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                   [1U] == vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                   [1U])) ? 2U : ((
                                                   (vlSelf->top__DOT__singleCycle__DOT__rd_wren
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
                                                   : 0U))),2);
        bufp->chgCData(oldp+50,((((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                   [2U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                           [1U])) & 
                                  (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                   [1U] == vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                   [1U])) ? 2U : ((
                                                   (vlSelf->top__DOT__singleCycle__DOT__rd_wren
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
                                                   : 0U))),2);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__pc
                                [0U]),32);
        bufp->chgIData(oldp+52,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc
                                 [0U])),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__pc
                                [4U]),32);
        bufp->chgIData(oldp+54,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc
                                 [4U])),32);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__alu_op
                                [1U]),4);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__instr
                                [2U]),32);
        bufp->chgCData(oldp+57,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                       [2U] >> 0xcU))),3);
        bufp->chgCData(oldp+58,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr
                                          [2U] >> 2U))),5);
        bufp->chgBit(oldp+59,(((7U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                             [2U] >> 0xcU))) 
                               | (6U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                               [2U] 
                                               >> 0xcU))))));
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__instr
                                [1U]),32);
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__rd_wren_o));
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__op_a_sel_o));
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__op_b_sel_o));
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__mem_wren_o));
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__alu_op_o),4);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__mem_op_o),3);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit1__wb_sel_o),2);
        bufp->chgCData(oldp+68,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                       [1U] >> 0xcU))),3);
        bufp->chgCData(oldp+69,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr
                                          [1U] >> 2U))),5);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__singleCycle__DOT__pc
                                [1U]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__singleCycle__DOT__rs1_data
                                [0U]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__singleCycle__DOT__rs2_data
                                [0U]),32);
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__singleCycle__DOT__rd_wren
                              [0U]));
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__singleCycle__DOT__alu_op
                                [0U]),4);
        bufp->chgBit(oldp+75,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel
                              [0U]));
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel
                              [0U]));
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__singleCycle__DOT__mem_op
                                [0U]),3);
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__singleCycle__DOT__mem_wren
                              [0U]));
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__singleCycle__DOT__wb_sel
                                [0U]),2);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__instr_o),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__pc_o),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__rs1_data_o),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__rs2_data_o),32);
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__rd_wren_o));
        bufp->chgCData(oldp+85,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__alu_op_o),4);
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__op_a_sel_o));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__op_b_sel_o));
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__mem_op_o),3);
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__mem_wren_o));
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ex_reg1__wb_sel_o),2);
        bufp->chgBit(oldp+91,(vlSelf->top__DOT__singleCycle__DOT__rd_wren
                              [2U]));
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__singleCycle__DOT__rd_wren
                              [3U]));
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                [1U]),5);
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                [2U]),5);
        bufp->chgCData(oldp+95,(vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                [1U]),5);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                [1U]),5);
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__singleCycle__DOT__rd_wren
                              [1U]));
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                [0U]),5);
        bufp->chgCData(oldp+99,(vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                [0U]),5);
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                 [0U]),5);
        bufp->chgBit(oldp+101,(((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                 [3U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                         [2U])) & (
                                                   (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                    [2U] 
                                                    == 
                                                    vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                                    [0U]) 
                                                   | (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                                      [2U] 
                                                      == 
                                                      vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                                      [0U])))));
        bufp->chgBit(oldp+102,((((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                  [1U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                          [0U])) & 
                                 (0U == (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr
                                                  [2U] 
                                                  >> 2U)))) 
                                & ((vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                    [0U] == vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                    [0U]) | (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                             [0U] == 
                                             vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                             [0U])))));
        bufp->chgBit(oldp+103,((((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                  [1U] & (0U != vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                          [0U])) & 
                                 (0xdU == (0x1fU & 
                                           (vlSelf->top__DOT__singleCycle__DOT__instr
                                            [2U] >> 2U)))) 
                                & ((vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                    [0U] == vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                    [0U]) | (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                             [0U] == 
                                             vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                             [0U])))));
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__singleCycle__DOT__instr
                                 [0U]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__id_reg1__instr_o),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__id_reg1__pc_o),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__immgen1__imm_o),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__singleCycle__DOT__inst_memory1__DOT__memory
                                 [(0xfffU & (vlSelf->top__DOT__singleCycle__DOT__pc
                                             [0U] >> 2U))]),32);
        bufp->chgBit(oldp+109,(vlSelf->top__DOT__singleCycle__DOT__mem_wren
                               [2U]));
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__singleCycle__DOT__rs2_data
                                 [2U]),32);
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__singleCycle__DOT__mem_op
                                 [2U]),3);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2),32);
        bufp->chgCData(oldp+114,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask),4);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__singleCycle__DOT__pc
                                 [2U]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__singleCycle__DOT__imm
                                 [0U]),32);
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__singleCycle__DOT__mem_op
                                 [1U]),3);
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__singleCycle__DOT__mem_wren
                               [1U]));
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__singleCycle__DOT__wb_sel
                                 [1U]),2);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__instr_o),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__pc_o),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__rs2_data_o),32);
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__rd_wren_o));
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__imm_o),32);
        bufp->chgCData(oldp+125,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__mem_op_o),3);
        bufp->chgBit(oldp+126,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__mem_wren_o));
        bufp->chgCData(oldp+127,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__mem_reg1__wb_sel_o),2);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__singleCycle__DOT__pc_IF_four
                                 [0U]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__singleCycle__DOT__pc_WB_four
                                 [0U]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__singleCycle__DOT__imm
                                 [2U]),32);
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__singleCycle__DOT__wb_sel
                                 [3U]),2);
        bufp->chgBit(oldp+132,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel
                               [1U]));
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel
                               [1U]));
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__pc_register__value_o),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory
                                 [vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                 [0U]]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory
                                 [vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                 [0U]]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[0]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[1]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[2]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[3]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[4]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[5]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[6]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[7]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[8]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[9]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[10]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[11]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[12]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[13]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[14]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[15]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[16]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[17]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[18]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[19]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[20]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[21]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[22]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[23]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[24]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[25]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[26]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[27]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[28]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[29]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[30]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[31]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__singleCycle__DOT__rs1_data
                                 [1U]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__singleCycle__DOT__rs2_data
                                 [1U]),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__singleCycle__DOT__instr
                                 [3U]),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__singleCycle__DOT__pc
                                 [3U]),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__singleCycle__DOT__imm
                                 [1U]),32);
        bufp->chgCData(oldp+174,(vlSelf->top__DOT__singleCycle__DOT__wb_sel
                                 [2U]),2);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__instr_o),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__pc_o),32);
        bufp->chgBit(oldp+177,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__rd_wren_o));
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__imm_o),32);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__ld_data_o),32);
        bufp->chgCData(oldp+180,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__wb_reg1__wb_sel_o),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__singleCycle__DOT__ld_data[0]),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__singleCycle__DOT__ld_data[1]),32);
        bufp->chgBit(oldp+183,((((7U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr
                                               [2U] 
                                               >> 0xcU))) 
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
        bufp->chgIData(oldp+184,(((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__mem_op
                                             [2U] >> 2U)) 
                                         & (~ vlSelf->top__DOT__singleCycle__DOT__mem_wren
                                            [2U])))
                                   ? ((0U == vlSelf->top__DOT__singleCycle__DOT__mem_op
                                       [2U]) ? ((((0x80U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                                   ? 0xffffffU
                                                   : 0U) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                       : ((1U == vlSelf->top__DOT__singleCycle__DOT__mem_op
                                           [2U]) ? 
                                          ((((0x8000U 
                                              & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                              ? 0xffffU
                                              : 0U) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                           : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                   : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__singleCycle__DOT__ld_data
                                 [1U]),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array
                                 [vlSelf->top__DOT__singleCycle__DOT__wb_sel
                                 [3U]]),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_a__DOT__multiplexer__DOT__input_array
                                 [vlSelf->top__DOT__singleCycle__DOT__op_a_sel
                                 [1U]]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_b__DOT__multiplexer__DOT__input_array
                                 [vlSelf->top__DOT__singleCycle__DOT__op_b_sel
                                 [1U]]),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array
                                 [(((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                     [2U] & (0U != 
                                             vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                             [1U])) 
                                    & (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                       [1U] == vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                       [1U])) ? 2U : 
                                   (((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                      [3U] & (0U != 
                                              vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                              [2U])) 
                                     & (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                        [2U] == vlSelf->top__DOT__singleCycle__DOT__rs1_addr
                                        [1U])) ? 3U
                                     : 0U))]),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array
                                 [(((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                     [2U] & (0U != 
                                             vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                             [1U])) 
                                    & (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                       [1U] == vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                       [1U])) ? 2U : 
                                   (((vlSelf->top__DOT__singleCycle__DOT__rd_wren
                                      [3U] & (0U != 
                                              vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                              [2U])) 
                                     & (vlSelf->top__DOT__singleCycle__DOT__rd_addr
                                        [2U] == vlSelf->top__DOT__singleCycle__DOT__rs2_addr
                                        [1U])) ? 3U
                                     : 0U))]),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__singleCycle__DOT__ld_data
                                 [0U]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+192,(vlSelf->top__DOT__singleCycle__DOT__id_reset_n));
        bufp->chgBit(oldp+193,(vlSelf->top__DOT__singleCycle__DOT__ex_reset_n));
        bufp->chgBit(oldp+194,(vlSelf->top__DOT__singleCycle__DOT__mem_reset_n));
        bufp->chgBit(oldp+195,(vlSelf->top__DOT__singleCycle__DOT__wb_reset_n));
        bufp->chgBit(oldp+196,(vlSelf->top__DOT__singleCycle__DOT__enable[0]));
        bufp->chgBit(oldp+197,(vlSelf->top__DOT__singleCycle__DOT__enable[1]));
        bufp->chgBit(oldp+198,(vlSelf->top__DOT__singleCycle__DOT__enable[2]));
        bufp->chgBit(oldp+199,(vlSelf->top__DOT__singleCycle__DOT__enable[3]));
        bufp->chgBit(oldp+200,(vlSelf->top__DOT__singleCycle__DOT__pc_enable[0]));
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__singleCycle__DOT__nxt_pc[0]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb[0]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb[0]),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__singleCycle__DOT__ex_alu_data),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__singleCycle__DOT__operand_a[0]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__singleCycle__DOT__operand_b[0]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__singleCycle__DOT__wb_data[0]),32);
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__singleCycle__DOT__br_sel[0]));
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__singleCycle__DOT__operand_a
                                 [0U]),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__singleCycle__DOT__operand_b
                                 [0U]),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb
                                 [0U]),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb
                                 [0U]),32);
        bufp->chgBit(oldp+213,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__brcomp1__br_sel_o));
        bufp->chgBit(oldp+214,((vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb
                                [0U] == vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb
                                [0U])));
        bufp->chgBit(oldp+215,(vlSelf->top__DOT__singleCycle__DOT__enable
                               [1U]));
        bufp->chgBit(oldp+216,(vlSelf->top__DOT__singleCycle__DOT__br_sel
                               [0U]));
        bufp->chgBit(oldp+217,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__pc_enable_o));
        bufp->chgBit(oldp+218,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__id_enable_o));
        bufp->chgBit(oldp+219,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__ex_enable_o));
        bufp->chgBit(oldp+220,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__mem_enable_o));
        bufp->chgBit(oldp+221,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__hazard_detect1__wb_enable_o));
        bufp->chgBit(oldp+222,(vlSelf->top__DOT__singleCycle__DOT__enable
                               [0U]));
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data),32);
        bufp->chgBit(oldp+226,(vlSelf->top__DOT__singleCycle__DOT__enable
                               [2U]));
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__singleCycle__DOT__mul_nxt_pc__DOT__multiplexer__DOT__input_array
                                 [vlSelf->top__DOT__singleCycle__DOT__br_sel
                                 [0U]]),32);
        bufp->chgQData(oldp+228,(vlSelf->top__DOT__singleCycle__DOT__mul_nxt_pc__DOT____Vcellinp__multiplexer__bus_i),64);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT__singleCycle__DOT__mul_nxt_pc__DOT__multiplexer__DOT__input_array[0]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__singleCycle__DOT__mul_nxt_pc__DOT__multiplexer__DOT__input_array[1]),32);
        bufp->chgWData(oldp+232,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT____Vcellinp__multiplexer__bus_i),128);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array[0]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array[1]),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array[2]),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__singleCycle__DOT__mul_wb_data__DOT__multiplexer__DOT__input_array[3]),32);
        bufp->chgQData(oldp+240,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_a__DOT____Vcellinp__multiplexer__bus_i),64);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_a__DOT__multiplexer__DOT__input_array[0]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_a__DOT__multiplexer__DOT__input_array[1]),32);
        bufp->chgQData(oldp+244,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_b__DOT____Vcellinp__multiplexer__bus_i),64);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_b__DOT__multiplexer__DOT__input_array[0]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__singleCycle__DOT__mult_operand_b__DOT__multiplexer__DOT__input_array[1]),32);
        bufp->chgBit(oldp+248,(vlSelf->top__DOT__singleCycle__DOT__pc_enable
                               [0U]));
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__singleCycle__DOT__nxt_pc
                                 [0U]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__singleCycle__DOT__wb_data
                                 [0U]),32);
        bufp->chgWData(oldp+251,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT____Vcellinp__multiplexer__bus_i),128);
        bufp->chgIData(oldp+255,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array[0]),32);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array[1]),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array[2]),32);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__singleCycle__DOT__rs1_data_wb_mux__DOT__multiplexer__DOT__input_array[3]),32);
        bufp->chgWData(oldp+259,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT____Vcellinp__multiplexer__bus_i),128);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array[0]),32);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array[1]),32);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array[2]),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__singleCycle__DOT__rs2_data_wb_mux__DOT__multiplexer__DOT__input_array[3]),32);
        bufp->chgBit(oldp+267,(vlSelf->top__DOT__singleCycle__DOT__enable
                               [3U]));
    }
    bufp->chgIData(oldp+268,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+269,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+270,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+271,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+272,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+273,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+274,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+275,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+276,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+277,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+278,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+279,(vlSelf->io_hex7_o),32);
    bufp->chgBit(oldp+280,(vlSelf->clk_i));
    bufp->chgBit(oldp+281,(vlSelf->rst_ni));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
