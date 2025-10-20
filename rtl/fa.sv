/* 
* Author: Ryan Cramer
* Date: Oct 19, 2025
* Design: Full-Adder
*
* Description:
* A full adder that takes in 3 inputs, cin, a, and b
* and gives two outputs: sum, and co
*/

`timescale 1ns/1ps

module fa (
	input a,
	input b,
	input cin,
	output logic sum,
	output logic co
);

	assign sum = a ^ b ^ cin;
	assign co = (a&b)|(cin&(a^b));

endmodule
