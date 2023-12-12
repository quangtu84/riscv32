////`include "constants.sv"
`include "src/constants.sv"
module alu (
    input  signed [31:0] operand_a_i,
    input  signed [31:0] operand_b_i,
    input  logic  [ 3:0] alu_op_i,
    output logic  [31:0] alu_data_o
);
  always_comb begin : alu
    alu_data_o = 32'b0;
    case (alu_op_i)
      `ALU_ADD:  alu_data_o = operand_a_i + operand_b_i;
      `ALU_SUB:  alu_data_o = operand_a_i - operand_b_i;
      `ALU_SLL:  alu_data_o = operand_a_i << operand_b_i[4:0];
      `ALU_SLT:  alu_data_o = {31'b0, operand_a_i < operand_b_i};
      `ALU_SLTU: alu_data_o = {31'b0, $unsigned(operand_a_i) < $unsigned(operand_b_i)};
      `ALU_XOR:  alu_data_o = operand_a_i ^ operand_b_i;
      `ALU_SRL:  alu_data_o = operand_a_i >> operand_b_i[4:0];
      `ALU_SRA:  alu_data_o = operand_a_i >>> operand_b_i[4:0];
      `ALU_OR:   alu_data_o = operand_a_i | operand_b_i;
      `ALU_AND:  alu_data_o = operand_a_i & operand_b_i;
      default:   alu_data_o = 32'b0;
    endcase
  end

endmodule : alu
