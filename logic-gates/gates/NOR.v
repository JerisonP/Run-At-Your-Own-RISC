module NOR(
	input in1,
	input in2,
	output out
);
	wire in1ORin2;
	or o1(in1ORin2, in1, in2);
	not n(out, in1ORin2);
endmodule
