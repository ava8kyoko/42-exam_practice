// Assignment name  : ft_countdown
// Expected files   : ft_countdown.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays all digits in descending order, followed by a
// newline.

// Example:
// $> ./ft_countdown | cat -e
// 9876543210$
// $>

#include <unistd.h> // write

int		main(void) // when arguments aren't needed, it's safer to use void
{
	char	number;

	number = '9' + 1; // Or with a table (but I hate forcing!)
	while (number-- != '0') // check fizzbuzz for example
		write(1, &number, 1);
	write(1, "\n", 1);
	return (0);
}
