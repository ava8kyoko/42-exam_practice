/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h> // write

// POURRAIT ÊTRE PLUS SIMPLE AVEC UNE MÊME FONCTION POUR LES DEUX BOUCLES
void	ft_union(char *first, char *second)
{
	int		i;
	int		len;
	
	len = -1;
	while (first[++len])
	{
		i = -1;
		while (first[++i])
		{
			if (i == len)
				write(1, &first[len], 1);
			if (first[len] == first[i])
				break;
		}
	}
	while (*second)
	{
		i = -1;
		while (++i <= len)
		{
			if (*second == first[i])
			{
				i = -1;
				break;
			}
		}
		if (i != -1)
			write(1, &*second, 1);
		len++;
		second++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

// exemples
// ./a.out aabcccc abbbbcd
// abcd

// ./a.out aabcccc 11123abc
// abc123
