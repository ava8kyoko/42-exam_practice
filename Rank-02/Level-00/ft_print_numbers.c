// Assignment name  : ft_print_numbers
// Expected files   : ft_print_numbers.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that displays all digits in ascending order.

// Your function must be declared as follows:
// void	ft_print_numbers(void);

#include <unistd.h> // write

int		main(void)
{
	char	number;

	number = '0' - 1; // Or with a table (but I hate forcing!)
	while (number++ != '9') // check fizzbuzz for example
		write(1, &number, 1);
	write(1, "\n", 1);
	return (0);
}