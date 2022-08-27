/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or there are no words, display a newline.

Example:
$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h> // write

size_t	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_space_tab(char character)
{
	if (character == ' ' || character == '\t')
		return (1);
	return (0);
}

int		is_start_end(char character, size_t len)
{
	if (len == 0 || character == '\0')
		return (1);
	return (0);
}

void	last_word(const char *str)
{
	int		len;

	if (str)
	{
		len = ft_strlen(str) - 1;
		while (is_space_tab(str[len]))
			len--;
		while (!is_space_tab(str[len - 1]) && !is_start_end(str[len], len))
			len--;
		while (str[len] || is_space_tab(str[len]))
			write(1, &str[len++], 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}