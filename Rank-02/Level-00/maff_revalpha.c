// Assignment name  : maff_revalpha
// Expected files   : maff_revalpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet in reverse, with even letters in
// uppercase, and odd letters in lowercase, followed by a newline.

// Example:
// $> ./maff_revalpha | cat -e
// zYxWvUtSrQpOnMlKjIhGfEdCbA$

#include <unistd.h>

int	main(void)
{
	char alpha;

	alpha = 'z' + 1;
	while (--alpha != 'a' - 1)
	{
		write(1, &alpha, 1);
		if (alpha % 2)
			alpha += 32;
		else
			alpha -=32;
	}
	write(1, "\n", 1);
	return (0);
}
