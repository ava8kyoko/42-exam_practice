// Assignment name  : ft_print_numbers
// Expected files   : ft_print_numbers.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that displays all digits in ascending order.

// Your function must be declared as follows:
// void	ft_print_numbers(void);

#include <unistd.h> // write

void ft_print_numbers()
{
	char number;
	
	number = '0' - 1;
	while (++number != '9' + 1)
		write(1, &number, 1);
	write(1, "\n", 1);
}

void ft_print_numbers_simple(void)
{
	write(1, "0123456789\n", 11);
}

int	main(void)
{
	ft_print_numbers_simple();
	ft_print_numbers();
	return (0);
}
