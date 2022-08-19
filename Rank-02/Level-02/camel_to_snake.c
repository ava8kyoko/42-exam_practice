/*
Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
*/

#include <unistd.h>

void	camel_to_snake(char *camel)
{
	int	i;
	
	i = -1;
	while (camel[++i])
	{
		if (i && camel[i] >= 'A' && camel[i] <= 'Z')
			write(1, "_", 1);
		write(1, &camel[i], 1);
	}
}

int	main(int argc, char **argv)
{
	char *camel;

	if (argv == 2)
		camel_to_snake(argc[1]);	
	write(1, "\n", 1);

	return (0); 
}