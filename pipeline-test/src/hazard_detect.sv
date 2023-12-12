////`include "constants.sv"
`include "src/constants.sv"
/* verilator lint_off UNUSED */
module hazard_detect (
    input logic [31:0] ex_instr_i,
    input logic ex_rd_wren_i,
    input logic mem_rd_wren_i,
    input logic wb_rd_wren_i,
    input logic br_sel_i,

    input logic [4:0] ex_rd_addr_i,
    input logic [4:0] mem_rd_addr_i,
    input logic [4:0] wb_rd_addr_i,
    input logic [4:0] id_rs1_addr_i,
    input logic [4:0] id_rs2_addr_i,

    output logic pc_enable_o,
    output logic id_enable_o,
    output logic ex_enable_o,
    output logic mem_enable_o,
    output logic wb_enable_o,

    output logic id_reset_no,
    output logic ex_reset_no,
    output logic mem_reset_no,
    output logic wb_reset_no
);

  logic hazard_1, hazard_2, hazard_3;
  assign hazard_1 = wb_rd_wren_i && (wb_rd_addr_i  != 5'b0)
                    && ((wb_rd_addr_i == id_rs1_addr_i) || (wb_rd_addr_i == id_rs2_addr_i));
  assign hazard_2 = ex_rd_wren_i && (ex_rd_addr_i  != 5'b0) && (ex_instr_i[6:2] == `OPCODE_LOAD)
                    && ((ex_rd_addr_i == id_rs1_addr_i) || (ex_rd_addr_i == id_rs2_addr_i)); //load
  assign hazard_3 = ex_rd_wren_i && (ex_rd_addr_i  != 5'b0) && (ex_instr_i[6:2] == `OPCODE_LUI)
                    && ((ex_rd_addr_i == id_rs1_addr_i) || (ex_rd_addr_i == id_rs2_addr_i)); //LUI

  always_comb begin
    pc_enable_o  = 1'b1;
    id_enable_o  = 1'b1;
    ex_enable_o  = 1'b1;
    mem_enable_o = 1'b1;
    wb_enable_o  = 1'b1;

    id_reset_no  = 1'b1;
    ex_reset_no  = 1'b1;
    mem_reset_no = 1'b1;
    wb_reset_no  = 1'b1;

    if (hazard_1 || hazard_2 || hazard_3) begin
      pc_enable_o = br_sel_i;
      id_enable_o = 1'b0;
      ex_reset_no = 1'b0;
    end
    if (br_sel_i) begin
      id_reset_no = 1'b0;
      ex_reset_no = 1'b0;
    end
  end

endmodule : hazard_detect
/* verilator lint_off UNUSED */
