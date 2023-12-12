module counter (
  // input
  input logic        clk_i,
  input logic        rst_ni,

  input logic        inc_i,

  // output
  output logic [3:0] counter_o
);

  always_ff @(posedge clk_i) begin : proc_counter
    if (!rst_ni)
      counter_o <= '0;
    else begin
      if ((counter_o < 4'h9) && inc_i)
        counter_o <= counter_o + 4'h1;
    end
  end

endmodule : counter
