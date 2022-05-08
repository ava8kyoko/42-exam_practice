// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.
// (Excluding the terminating null byte ('\0').)

// Your function must be declared as follows:
// int	ft_strlen(char *str);

#include <stdio.h> // printf

int	ft_strlen(char *str)
{
	int size;

	if (!str)
		return (0);
	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	main(void)
{
	printf("%d\n", ft_strlen(0));
	printf("%d\n", ft_strlen("HELLO"));
	printf("%d\n", ft_strlen("HELLO WORLD!"));
	return (0);
}
