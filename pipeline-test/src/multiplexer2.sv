module multiplexer2 #(
    parameter WIDTH = 32
) (
    input  [WIDTH-1:0] in0_i,
    input  [WIDTH-1:0] in1_i,
    input              sel_i,
    output [WIDTH-1:0] out_o
);

  multiplexer #(
      .WIDTH(WIDTH),
      .CHANNELS(2)
  ) multiplexer (
      .bus_i({in0_i, in1_i}),
      .sel_i(sel_i),
      .out_o(out_o)
  );

endmodule
