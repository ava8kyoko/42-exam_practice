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
	int i;

	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!src || !dest)
		return (0);
	while (*src)
	{
		printf("src : %c\n", *src);
		dest[i++] = *src++;
		printf("dest : %c\n", *dest);
	}
	dest[i] = '\0';
	return (dest);
}

// char	*ft_strdup(char *src)
// {
// 	int	i = 0;
// 	int	length = 0;
// 	char	*strcpy = malloc(length + 1);

// 	while (src[length])
// 		length++;
// 	if (strcpy != NULL)
// 	{
// 		while (src[i])
// 		{
// 			strcpy[i] = src[i];
// 			i++;
// 		}
// 		strcpy[i] = '\0';
// 	}
// 	return (strcpy);
// }

int		main(int argc, char **argv)
{
	printf("%s\n", ft_strdup(argv[1]));
	printf("%s\n", strdup(argv[1]));
	return (0);
}