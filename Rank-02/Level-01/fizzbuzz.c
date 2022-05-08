// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.
// If the number is a multiple of 3, it prints 'fizz' instead.
// If the number is a multiple of 5, it prints 'buzz' instead.
// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:
// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
// $>

#include <unistd.h> // write

// recurcive
static void	write_number(int number)
{
	char converted[10] = "0123456789";

	if (number >= 10)
		write_number(number / 10);
	write(1, &converted[number % 10], 1);
}

int	main(void)
{
	int number;
	
	write(1, "fizzbuzz\n", 9);
	number = 0;
	while (++number <= 100)
	{
		if (number % 3 == 0 || (number % 3 == 0 && number % 5 == 0))
			write(1, "fizz", 4);
		if (number % 5 == 0 || (number % 3 == 0 && number % 5 == 0))
			write(1, "buzz", 4);
		else if (number % 3 != 0 && number % 5 != 0)
			write_number(number);
		write(1, "\n", 1);
	}
	return (0);
}
