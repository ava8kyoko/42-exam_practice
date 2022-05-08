// Assignment name  : ft_putstr
// Expected files   : ft_putstr.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that displays a string on the standard output.
// The pointer passed to the function contains the address of the string's first
// character.

// Your function must be declared as follows:
// void	ft_putstr(char *str);

#include <stdio.h> // printf
#include <unistd.h> // write

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

void	putstr_len(char *str)
{
	if (!str)
		return ;
	write(1, str, ft_strlen(str));
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void	putstr_pointer_arithmetic(char *str)
{
	int i;

	if (!str)
		return ;
	i = -1;
	while (*str != '\0')
		write(1, &*str++, 1);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void	putstr_counter(char *str)
{
	int i;

	if (!str)
		return ;
	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

int		main(void)
{
	putstr_counter("HELLO WORLD!\n");
	putstr_pointer_arithmetic("HELLO WORLD!\n");
	putstr_len("HELLO WORLD!\n");
	return (0);
}