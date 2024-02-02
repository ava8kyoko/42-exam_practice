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

// int	main()
// {
// 	write(1, "9876543210\n", 11);
// 	return (0);
// }


int main(void)
{
	char number;

	number = '9' + 1;
	while (--number != '0' - 1)
		write(1, &number, 1);
	write(1, "\n", 1);
	return(0);
}
