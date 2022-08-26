/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <stdio.h>
#include <unistd.h>

int		twin(char *first, char second, size_t len)
{
	while (*first && len--)
	{
		if (*first == second)
			return (1);
		first++;
	}	
	return (0);
}

void		inter(char *first, char *second)
{
	int		i;
	int		len;
	len = -1;
	while (first[++len])
	{
		i = -1;
		while (second[++i])
		{
			if (first[len] == second[i] && !twin(first, second[i], len))
			{
				write(1, &first[len], 1);
				break;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
