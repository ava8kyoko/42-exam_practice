/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None

---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).
The function should be prototyped as follows:
size_t	ft_strspn(const char *s, const char *accept);

---------------------------------------------------------------

NAME
	strspn -- span a string

DESCRIPTION
	The strspn() function spans the initial part of the null-terminated
	string s as long as the characters from s occur in the null-terminated
	string charset.  In other words, it computes the string array index of
	the first character of s which is not in charset, else the index of the
	first null character.

RETURN VALUES
	The strspn() functions returns the number of characters
	spanned.

https://www.youtube.com/watch?v=ewWG3HxHrl4
*/

#include <stdio.h> // printf
#include <string.h> // strspn

size_t	ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int		i;
	int		len;
	int		spanned;
	
	if (!s || !accept)
		return (0);
	i = 0;
	len = ft_strlen(accept) - 1;
	spanned = 0;
	while (*s)
	{
		while (*s != accept[i] && i != len)
			i++;
		if (*s == accept[i])
			spanned++;


		// while (*s != accept[i])
		// 	i++;
		// while (*s == accept[i + 1])
		// {
		// 	i++;
		// 	spanned++;
		// }
		// while (*s == accept[i])
		// 	s++;
		// if (*s != accept[i])
		// 	i++;
		// if (i == len && *s != accept[i])
		// 	i = 0;
	}
	return (spanned);
}

int		main(int argc, char **argv)
{
	printf("ft_strspn : %zu\n", ft_strspn(argv[1], argv[2]));
	printf("Original : %zu\n", strspn(argv[1], argv[2]));

	return (0);
}