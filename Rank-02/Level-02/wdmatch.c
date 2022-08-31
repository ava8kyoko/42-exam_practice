/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/

#include <stdio.h>
#include <unistd.h> // write

int		ft_strlen(char *str)
{
	int		i;

	while (str[i])
		i++;
	return (i);
}

void	wdmatch(char *first, char *second)
{
	int		i;
	int		len;
	int		position[ft_strlen(first) + 1];

	i = 0;
	len = 0;
	while (*first)
	{
		while (*first != second[len] && second[len])
		{
			if (!second[len++])
				len = -1;
		}
		if (second[len] == *first)
			position[i++] = len;
		first++;
		printf("%d\n", i);
	}
	if (len != -1)
	{
		position[i] = -1;
		i = -1;
		while (position[++i] != -1)
			write(1, &second[position[i]], 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}


// allo 123allo