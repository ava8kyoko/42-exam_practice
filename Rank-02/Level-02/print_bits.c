/*
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.
Your function must be declared as follows:
void	print_bits(unsigned char octet);
Example, if you pass 2 to print_bits, it will print "00000010"

--------------------------------------------------------------------------------

Algorithm for Decimal to Binary Conversion in C
Step 1: Divide the number by 2 and find the remainder, then store the remainder in an array.
Step 2: Divide the number by 2.
Step 3: Repeat the above two steps until the number is greater than zero.
Step 4: Print the array in reverse order to get the binary representation of the number.
https://www.scaler.com/topics/decimal-to-binary-in-c/

--------------------------------------------------------------------------------

https://en.wikipedia.org/wiki/Bitwise_operations_in_C
*/

#include <unistd.h> // write

void	print_bits(unsigned char octet)
{
	unsigned char		bit;
	int					i;

	i = 8; // an octet has 8 positions/bits
	while (i--)
	{
		bit = (octet >> i & 1) + '0'; // Right shift (>>) It shifts each bit in its left operand to the right.
		write(1, &bit, 1);	// bit a bit b 	a & b (a AND b)
	}						//	0	&	0	=	0
}							//	0	&	1	=	0
							//	1	&	0	=	0
							//	1	&	1	=	1

int		main(void)
{
	unsigned char octet = 255; // 0 to 255 range (because char is -128 to 127)
	print_bits(octet);
	return (0);
}