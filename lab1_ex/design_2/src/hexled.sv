module hexled (
  // input
  input logic [3:0]  data_i,

  // output
  output logic [6:0] hex_o
);

  always_comb begin : proc_7seg_decoder
    case (data_i)
	    4'h0: hex_o = 7'b100_0000;
	    4'h1: hex_o = 7'b111_1001;
	    4'h2: hex_o = 7'b010_0100;
	    4'h3: hex_o = 7'b011_0000;
	    4'h4: hex_o = 7'b001_1001;
	    4'h5: hex_o = 7'b001_0010;
	    4'h6: hex_o = 7'b000_0010;
	    4'h7: hex_o = 7'b101_1000;
	    4'h8: hex_o = 7'b000_0000;
	    4'h9: hex_o = 7'b001_1000;
	    4'ha: hex_o = 7'b000_1000;
	    4'hb: hex_o = 7'b000_0011;
	    4'hc: hex_o = 7'b100_0110;
	    4'hd: hex_o = 7'b010_0001;
	    4'he: hex_o = 7'b000_0110;
	    4'hf: hex_o = 7'b000_1110;
    endcase
  end

endmodule : hexled
