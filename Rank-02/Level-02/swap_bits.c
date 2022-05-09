// Assignment name  : swap_bits
// Expected files   : swap_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:
// unsigned char	swap_bits(unsigned char octet);

// Example:
//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \\
//  0001 | 0100

#include <stdio.h> // printf (forbidden)

// a "bit" is atomic: the smallest unit of storage
// A bit stores just a 0 or 1
// In general: add 1 bit, double the number of patterns
// 1 bit - 2 patterns
// 2 bits - 4
// 3 bits - 8
// 4 bits - 16
// 5 bits - 32
// 6 bits - 64
// 7 bits - 128
// 8 bits - 256 - one byte 
// Mathematically: n bits yields 2n patterns (2 to the nth power) 
// One byte can store one character
// https://web.stanford.edu/class/cs101/bits-bytes.html // Interesting -> integer overflow !

// << shift left operator - Left shift operator shifts all bits towards left by a certain number of specified bits.
//							The bit positions that have been vacated by the left shift operator are filled with 0. 
// >> shift right operator - Right shift operator shifts all bits towards right by certain number of specified bits.
// | bitwise OR operator - The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1.
// example :
// 0x0F in hexadecimal = 15 (base 10) in decimal --> bit pattern = 0000 1111 in binary
// Left part : 0000 1111 >> 4 = 0000 0000
// Right part : 0000 1111 << 4 = 1111 0000 0000
// Left | Right
//   0000 0000
// | 1111 0000
// = 1111 0000 
// BECAUSE ->	0 + 0 = 0
//				1 + 0 = 1
//				1 + 0 = 1
//				1 + 1 = 1
//
// 12 in binary = 0000 1100
// Left >> 4 = 0000 0000
// Right << 4 = 1100 0000
//   0000 0000
// | 1100 0000
//   1100 0000
unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4); // Inverse the four first bits witch the four last.
}

// Nice converter
// https://coolconversion.com/math/binary-octal-hexa-decimal/Convert__number_11001100_in__
int		main(void)
{
	unsigned char octet;

	octet = 12; // become 192
	printf("before : %d\n", octet);
	printf("after : %d\n", swap_bits(octet));
	return (0);
}

// Simplier version for a better understanding of the processus

// unsigned char	swap_bits(unsigned char octet)
// {
// 	unsigned char left;
// 	unsigned char right;

// 	left = octet >> 4;
// 	right = octet << 4;
// 	return (left | right);// Inverse the four first bits witch the four last.
// }
