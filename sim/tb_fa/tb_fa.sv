`timescale 1ns/1ps

module tb_fa();

	logic a, b, cin;
	
	fa DUT(
		.a(a),
		.b(b),
		.cin(cin),
		.sum(),
		.co()
	);
	
	initial begin
		$dumpfile("tb_fa.vcd");
		$dumpvars(0, tb_fa);
	end

	always begin
		// test all zeroes
		#10 a <= 1'b0;
			b <= 1'b0;
			cin <= 1'b0;
		
		//assert(DUT.sum == 1'b0);
		//assert(DUT.co == 1'b0);
		
		// test a high
		#10 a <= 1'b1;
			b <= 1'b0;
			cin <= 1'b0;
		
		//assert(DUT.sum == 1'b1);
		//assert(DUT.co == 1'b0);
	
		// test b high
		#10 a <= 1'b0;
			b <= 1'b1;
			cin <= 1'b0;
		
		//assert(DUT.sum == 1'b1);
		//assert(DUT.co == 1'b0);

		// test cin high
		#10 a <= 1'b0;
			b <= 1'b0;
			cin <= 1'b1;
		
		//assert(DUT.sum == 1'b1);
		//assert(DUT.co == 1'b0);

		// test a + b = co high
		#10 a <= 1'b1;
			b <= 1'b1;
			cin <= 1'b0;
		
		//assert(DUT.sum == 1'b0);
		//assert(DUT.co == 1'b1);

		// test a + cin = co high
		#10 a <= 1'b1;
			b <= 1'b0;
			cin <= 1'b1;
		
		//assert(DUT.sum == 1'b0);
		//assert(DUT.co == 1'b1);

		// test b + cin = co high
		#10 a <= 1'b0;
			b <= 1'b1;
			cin <= 1'b1;
		
		//assert(DUT.sum == 1'b0);
		//assert(DUT.co == 1'b1);

		#10 a <= 1'b1;
			b <= 1'b1;
			cin <= 1'b1;
		
		//assert(DUT.sum == 1'b1);
		//assert(DUT.co == 1'b1);

		#10 $finish;

	end

endmodule
