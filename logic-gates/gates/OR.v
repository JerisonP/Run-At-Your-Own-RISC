module OR(
	input in1,
	input in2,
	output out
);
	wire not1;
	wire not2;

	not n1 (not1, in1);
	not n2 (not2, in2);

	nand n3 (out, not1, not2);
endmodule
