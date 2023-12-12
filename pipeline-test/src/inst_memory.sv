////`include "constants.sv"
`include "src/constants.sv"
/* verilator lint_off UNUSED */
module inst_memory 

(
	input logic clk_i, rst_ni,
	input logic [31:0] addr_i,

	output logic [31:0] rdata_o
);
    logic [31:0] memory [2**12-1:0];

    //read operation
    assign rdata_o = memory [addr_i[13:2]];

  `ifdef VERILATOR
    initial begin
      $readmemh("./memory/instmem.data.sim", memory);
    end
  `else
    initial begin
      $readmemh("../memory/instmem.data.sim", memory);
    end
`endif
   
endmodule: inst_memory
/* verilator lint_off UNUSED */
