/* 
* Author: Ryan Cramer
* Date: 10/19/2025
* Design: 8-bit RCA
*
* Description:
* 8-bit RCA using 7 full-adders
*/

`timescale 1ns/1ps

module rca_8b(
    input [7:0] a,
    input [7:0] b,
    output logic [7:0] c
);
    logic co0, co1, co2, co3, co4, co5, co6,
    fa fa0 (
        .a(a[0]),
        .b(b[0]),
        .cin(1'b0),
        .sum(c[0]),
        .co(co0)
    )

    fa fa1 (
        .a(a[1]),
        .b(a[1]),
        .cin(co0),
        .sum(c[1]),
        .co(co1)
    )

    fa fa2 (
        .a(a[2]),
        .b(b[2]),
        .cin(co1),
        .sum(c[2]),
        .co(co2)
    )

    fa fa3 (
        .a(a[3]),
        .b(b[3]),
        .cin(co2),
        .sum(c[3]),
        .co(co3)
    )

    fa fa4 (
        .a(a[4]),
        .b(b[4]),
        .cin(co3),
        .sum(c[4]),
        .co(co4)
    )

    fa fa5 (
        .a(a[5]),
        .b(b[5]),
        .cin(co4),
        .sum(c[5]),
        .co(co5)
    )

    fa fa6 (
        .a(a[6]),
        .b(a[6]),
        .cin(co5),
        .sum(c[6]),
        .co(c[7])
    )

endmodule
