module AND(
	input in1,
	input in2,
	output out
);
	wire nand_out;

	nand n1 (nand_out, in1, in2);
	not n2 (out, nand_out);
endmodule

