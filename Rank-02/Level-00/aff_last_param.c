// Assignment name  : aff_last_param
// Expected files   : aff_last_param.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes strings as arguments, and displays its last
// argument followed by a newline.

// If the number of arguments is less than 1, the program displays a newline.

// Examples:

// $> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
// chats$
// $> ./aff_last_param "j'aime le savon" | cat -e
// j'aime le savon$
// $> ./aff_last_param
// $

#include <unistd.h> // write

int		main(int argc, char *argv[])
{
	int		i;
	int		last;

	if (argc >= 2)
	{
		last = 0;
		while (argv[last + 1]) // count how much arguments there are.
			last++;
		i = -1;
		while (argv[last][++i])
			write(1, &argv[last][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
