// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>

#include <unistd.h> // write

int		main(int argc, char *argv[])
{
	int		i;
	int		repeat;

	if (argc == 2)
	{
		i = -1;
		while (argv[1][++i] != '\0')
		{
			repeat = 1;
			if (argv[1][i] > 'A' && argv[1][i] <= 'Z')
				repeat += (argv[1][i] - 'A');
			else if (argv[1][i] > 'a' && argv[1][i] <= 'z')
				repeat += (argv[1][i] - 'a');
			while (repeat--)
				write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
