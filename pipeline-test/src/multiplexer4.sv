module multiplexer4 #(
    parameter WIDTH = 32
) (
    input  [WIDTH-1:0] in0_i,
    input  [WIDTH-1:0] in1_i,
    input  [WIDTH-1:0] in2_i,
    input  [WIDTH-1:0] in3_i,
    input  [      1:0] sel_i,
    output [WIDTH-1:0] out_o
);

  multiplexer #(
      .WIDTH(WIDTH),
      .CHANNELS(4)
  ) multiplexer (
      .bus_i({in0_i, in1_i, in2_i, in3_i}),
      .sel_i(sel_i),
      .out_o(out_o)
  );

endmodule
