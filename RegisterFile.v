module RegisterFile(
  input clk,
  input write_enable,
  input [4:0]read_address1,
  input [4:0]read_address2,
  input [4:0]write_address,
  input [31:0]write_data,
  output [31:0]read_data1,
  output [31:0]read_data2
);

  reg [31:0] registeries[0:31];

  always @ (posedge clk) begin
    registeries[write_address] <= write_enable ? write_data : registeries[write_address];
  end

  assign read_data1 = registeries[read_address1];
  assign read_data2 = registeries[read_address2];

  initial begin
    registeries[0] = 32'd5;
    registeries[1] = 32'd10;    
  end
endmodule