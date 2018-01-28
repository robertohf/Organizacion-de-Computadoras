`include "Alu_func.vh"

module Alu(
  input [31:0]read_data1,
  input [31:0]read_data2,
  input [3:0]func,
  output reg isZero,
  output [31:0]result
);

  always @(read_data1 or read_data2 or func) begin
    case(func)
      `ALU_ADD: 
        result = $signed(read_data1) + $signed(read_data2);
      `ALU_SUB: 
        result = $signed(read_data1) - $signed(read_data2);
      `ALU_AND: 
        result = $signed(read_data1) & $signed(read_data2);
      `ALU_OR: 
        result = $signed(read_data1) | $signed(read_data2);
      default:
        result = 32'dx;
    endcase
  end

  assign isZero  = (result == 0);
endmodule