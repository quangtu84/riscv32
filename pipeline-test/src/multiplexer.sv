module multiplexer #(
    parameter  WIDTH    = 32,
    parameter  CHANNELS = 2
) (
    input  [(CHANNELS * WIDTH) - 1:0] bus_i,
    input  [  $clog2(CHANNELS) - 1:0] sel_i,
    output [             WIDTH - 1:0] out_o
);

  genvar ig;

  logic [WIDTH - 1:0] input_array[0:CHANNELS - 1];

  assign out_o = input_array[sel_i];

  for (ig = 0; ig < CHANNELS; ig = ig + 1) begin
    assign input_array[(CHANNELS-1)-ig] = bus_i[(ig*WIDTH)+:WIDTH];
  end

endmodule
