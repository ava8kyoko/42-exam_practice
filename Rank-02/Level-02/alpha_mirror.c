// Assignment name  : alpha_mirror
// Expected files   : alpha_mirror.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called alpha_mirror that takes a string and displays this string
// after replacing each alphabetical character by the opposite alphabetical
// character, followed by a newline.
// 'a' becomes 'z', 'Z' becomes 'A'
// 'd' becomes 'w', 'M' becomes 'N'
// and so on.
// Case is not changed.
// If the number of arguments is not 1, display only a newline.

// Examples:
// $>./alpha_mirror "abc"
// zyx
// $>./alpha_mirror "My horse is Amazing." | cat -e
// Nb slihv rh Znzarmt.$
// $>./alpha_mirror | cat -e
// $
// $>

#include <unistd.h>

void	alpha_mirror(char *alpha)
{
	int		i;

	i = -1;
	while (alpha[++i])
	{
		if (alpha[i] >= 'A' && alpha[i] <= 'Z')
			alpha[i] = 'Z' - alpha[i] + 'A';
		else if (alpha[i] >= 'a' && alpha[i] <= 'z')
			alpha[i] = 'z' - alpha[i] + 'a';
		write(1, &alpha[i], 1);
		
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2) // a.out + arg
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}