/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
*/

#include <stdio.h> // printf (forbidden)
#include <unistd.h> // write (forbidden)

void	print_bits(unsigned char octet)
{
	unsigned char		bit;
	int					i;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	left;
	unsigned char	right;

	left = octet << 4;
	right = octet >> 4;

	return (left | right);
	// return (octet << 4 | octet >> 4);
}

// Bitwise OR |
// bit a 	bit b 	a | b (a OR b)
// 	0 	|	0 	=	0
// 	0 	|	1 	=	1
// 	1 	|	0 	=	1
// 	1 	|	1 	=	1

int		main(void)
{
	unsigned char octet = 9;
	
	print_bits(octet);
	write(1, "\n", 1);
	print_bits(reverse_bits(octet));
	return (0);
}