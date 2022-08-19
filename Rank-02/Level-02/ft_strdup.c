// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc

// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).
// Your function must be declared as follows:
// char    *ft_strdup(char *src);

// --------------------------------------------------------------------------------

// NAME
//      strdup -- save a copy of a string

// DESCRIPTION
//      The strdup() function allocates sufficient memory for a copy of the
//      string s1, does the copy, and returns a pointer to it.  The pointer may
//      subsequently be used as an argument to the function free(3).

//      If insufficient memory is available, NULL is returned and errno is set to
//      ENOMEM.


#include <stdio.h> // printf
#include <stdlib.h> // malloc
#include <string.h> // strdup

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!src || !dest)
		return (0);
	while (*src)
	{
		printf("%c\n", *src);
		*dest++ = *src++;
		printf("%c\n", *dest);
	}
	*dest = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	printf("%s\n", ft_strdup(argv[1]));
	printf("%s\n", strdup(argv[1]));
	return (0);
}