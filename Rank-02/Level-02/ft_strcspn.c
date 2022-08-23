/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None

---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).
The function should be prototyped as follows:
size_t	ft_strcspn(const char *s, const char *reject);

---------------------------------------------------------------

NAME
	strcspn -- span a string

DESCRIPTION
	The strcspn() function spans the initial part of the null-terminated
	string s as long as the characters from s do not occur in the null-termi-
	nated string charset (it spans the complement of charset).  In other
	words, it computes the string array index of the first character of s
	which is also in charset, else the index of the first null character.

RETURN VALUES
	The strcspn() function returns the number of characters spanned.

https://www.youtube.com/watch?v=ewWG3HxHrl4
*/

#include <stdio.h>
#include <string.h> // strcpn

size_t	ft_strcspn(const char *s, const char *reject)
{
	int		i;
	int 	j;

	i = 0;
	j = 0;
	while (s[i] && s[i] != reject[j])
	{
		if (!reject[j++])
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

int	main (int argc, char **argv)
{
	printf("ft_strcspn : %zu\n", ft_strcspn(argv[1], argv[2]));
	printf("Original : %lu\n", strcspn(argv[1], argv[2]));

	return (0);
}