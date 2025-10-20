/* 
* Author: Ryan Cramer
* Date: Oct 19, 2025
* Design: Operator Adder
*
* Description:
* An adder that takes in two 8-bit inputs A and B,
* and returns an 8 bit result, C
*/

`timescale 1ns/1ps

module adder_8b(
    input [7:0] a,
    input [7:0] b,
    output logic [7:0] c
);

    assign c = a + b;
    
endmodule