module MIPS32SOC(input clk,
  input [4:0]read_address1,
  input [4:0]read_address2,
  input [4:0]write_address,  
  input [3:0]func,
  input write_enable,
  output isZero);

//RegisterFile
wire [31:0]result;

//Alu
wire [31:0]read_data1;
wire [31:0]read_data2;

RegisterFile RegisterFile(clk, write_enable, read_address1, read_address2, write_address, result, read_data1, read_data2);
Alu Alu(read_data1, read_data2, func, isZero, result);

endmodule