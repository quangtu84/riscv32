module register #(
    parameter WIDTH         = 32,
    parameter INITIAL_VALUE = 0
) (
    input clk_i,
    input reset_ni,
    input wr_en_i,
    input [WIDTH-1 : 0] value_i,

    output logic [WIDTH-1 : 0] value_o
);

  initial begin
    value_o = INITIAL_VALUE;
  end

  always_ff @(posedge clk_i) begin
    if (!reset_ni) value_o <= INITIAL_VALUE;
    else if(wr_en_i) value_o <= value_i;
  end

endmodule
