// Assignment name  : maff_alpha
// Expected files   : maff_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet, with even letters in uppercase, and
// odd letters in lowercase, followed by a newline.

// even = pair
// odd = impair

// Example:
// $> ./maff_alpha | cat -e
// aBcDeFgHiJkLmNoPqRsTuVwXyZ$

#include <unistd.h> // write

int		main(void)
{
	char		alpha;

	alpha = 'a' - 1; // -1 because I increment inside conditions.
	while (alpha++ != 'Z' + 32) // + 32 because it does an extra while
	{							//  due to where write is. (Can force it, and place a write before the loop!)
		write(1, &alpha, 1);
		if (alpha % 2) // alpha % 2 != 0 -> odd
			alpha -= 32; // change to lowercase
		else  // alpha % 2 == 0 -> even
			alpha += 32; // -> change to uppercase
	}
	write(1, "\n", 1);
	return (0);
}

// NOTA BENE : see maff_alpha for other examples
