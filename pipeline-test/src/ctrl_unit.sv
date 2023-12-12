////`include "constants.sv"
`include "src/constants.sv"
/* verilator lint_off UNUSED */
module ctrl_unit (
    input logic [31:0] instr_i,

    output logic rd_wren_o,
    output logic op_a_sel_o,
    output logic op_b_sel_o,
    output logic mem_wren_o,
    output logic [3:0] alu_op_o,
    output logic [2:0] mem_op_o,
    output logic [1:0] wb_sel_o
);
  logic [2:0] funct3;
  logic [4:0] funct7;

  assign funct3 = instr_i[14:12];
  assign funct7 = instr_i[6:2];

  always_comb begin
    rd_wren_o     = 1'b0;  // WRITE TO RD
    op_a_sel_o    = `CTL_ALU_A_RS1;  // 0: RS1, 1: PC
    op_b_sel_o    = `CTL_ALU_B_RS2;  // 0: RS2, 1: IMM
    mem_wren_o    = 1'b0;  // WRITE TO MEM
    alu_op_o      = `ALU_ADD;  // ALU_OP default ADD
    mem_op_o      = `FUNCT3_MEM_WORD;  // MEM_OP
    wb_sel_o      = `CTL_WRITEBACK_ALU;  // 0: ALU_DATA, 1: LD_DATA, 2: PC_FOUR, 3: IMM
    case (funct7)
      `OPCODE_LOAD: begin
        rd_wren_o  = 1'b1;
        op_b_sel_o = `CTL_ALU_B_IMM;
        mem_op_o   = funct3;
        wb_sel_o   = `CTL_WRITEBACK_LOAD;
      end
      `OPCODE_OP_IMM: begin
        rd_wren_o  = 1'b1;
        op_b_sel_o = `CTL_ALU_B_IMM;
        alu_op_o   = {(funct3 == 3'b101) ? instr_i[30] : 1'b0, funct3};
      end
      `OPCODE_STORE: begin
        op_b_sel_o = `CTL_ALU_B_IMM;
        mem_wren_o = 1'b1;
        mem_op_o   = funct3;
      end
      `OPCODE_AUIPC: begin
        rd_wren_o  = 1'b1;
        op_a_sel_o = `CTL_ALU_A_PC;
        op_b_sel_o = `CTL_ALU_B_IMM;
      end
      `OPCODE_LUI: begin
        rd_wren_o = 1'b1;
        wb_sel_o  = `CTL_WRITEBACK_IMM;
      end
      `OPCODE_JAL: begin
        rd_wren_o  = 1'b1;
        op_a_sel_o = `CTL_ALU_A_PC;
        op_b_sel_o = `CTL_ALU_B_IMM;
        wb_sel_o   = `CTL_WRITEBACK_PC4;
      end
      `OPCODE_JALR: begin
        rd_wren_o  = 1'b1;
        op_b_sel_o = `CTL_ALU_B_IMM;
        wb_sel_o   = `CTL_WRITEBACK_PC4;
      end
      `OPCODE_BRANCH: begin
        op_a_sel_o = `CTL_ALU_A_PC;
        op_b_sel_o = `CTL_ALU_B_IMM;
      end
      `OPCODE_OP: begin
        rd_wren_o = 1'b1;
        alu_op_o  = {instr_i[30], funct3};
      end
      default: begin
        rd_wren_o  = 1'bx;
        mem_wren_o = 1'bx;
      end
    endcase
  end
endmodule : ctrl_unit
/* verilator lint_off UNUSED */
