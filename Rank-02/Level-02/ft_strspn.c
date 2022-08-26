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

char	*ft_strchr(const char *str, int character)
{
	while (*str)
	{
		if (*str == (char)character)
			return ((char *)str);
		str++;
	}
	return (0);
}

size_t	ft_strspn(const char *str, const char *accept)
{
	size_t		i;

	i = 0;
	while (str[i])
	{
		if (!ft_strchr(accept, str[i]))
			break;
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	printf("ft_strspn : %zu\n", ft_strspn(argv[1], argv[2]));
	printf("Original : %zu\n", strspn(argv[1], argv[2]));

	return (0);
}