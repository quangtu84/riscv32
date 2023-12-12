////`include "constants.sv"
`include "src/constants.sv"
/* verilator lint_off UNUSED */
module brcomp (
    input logic  [31:0] instr_i,
    input signed [31:0] rs1_data_i,
    input signed [31:0] rs2_data_i,

    output logic br_sel_o
);
  logic [2:0] funct3;
  logic [4:0] funct7;
  logic br_unsigned;
  logic br_equal;
  logic br_less;

  assign funct3      = instr_i[14:12];
  assign funct7      = instr_i[6:2];
  assign br_equal    = (rs1_data_i == rs2_data_i);
  assign br_unsigned = ((funct3 == `FUNCT3_BRANCH_BGEU) || (funct3 == `FUNCT3_BRANCH_BLTU));

  always_comb
    if (br_unsigned) begin
      br_less = ($unsigned(rs1_data_i) < $unsigned(rs2_data_i));
    end else br_less = (rs1_data_i < rs2_data_i);

  always_comb begin
    if (funct7 == `OPCODE_BRANCH)
      case (funct3)
        `FUNCT3_BRANCH_BEQ: br_sel_o = br_equal;
        `FUNCT3_BRANCH_BNE: br_sel_o = !br_equal;
        `FUNCT3_BRANCH_BLT, `FUNCT3_BRANCH_BLTU: br_sel_o = br_less;
        `FUNCT3_BRANCH_BGE, `FUNCT3_BRANCH_BGEU: br_sel_o = (br_equal | !br_less);
        default: br_sel_o = 1'b0;
      endcase
    else if (funct7 == `OPCODE_JAL || funct7 == `OPCODE_JALR) br_sel_o = 1'b1;
    else br_sel_o = 1'b0;
  end
endmodule
/* verilator lint_off UNUSED */
