module adder #(
    parameter WIDTH = 32
) (
    input  [WIDTH-1:0] operand_a_i,
    input  [WIDTH-1:0] operand_b_i,
    output [WIDTH-1:0] result_o
);

  assign result_o = operand_a_i + operand_b_i;

endmodule
