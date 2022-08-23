/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None

---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).
The function should be prototyped as follows:
char	*ft_strpbrk(const char *s1, const char *s2);

---------------------------------------------------------------

NAME
	strpbrk -- locate multiple characters in string

DESCRIPTION
	The strpbrk() function locates in the null-terminated string s the first
	occurrence of any character in the string charset and returns a pointer
	to this character.  If no characters from charset occur anywhere in s
	strpbrk() returns NULL.

https://www.youtube.com/watch?v=xRKReYD-pgw
*/

#include <stdio.h>
#include <string.h>	// strpbrk

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (*s1 && *s1 != s2[i])
	{
		if (!s2[i++])
		{
			s1++;
			printf("%s\n", (char *)s1);
			i = 0;
		}
	}
	if (!*s1)
			return (0);
	return ((char *)s1);
}

int		main(int argc, char **argv)
{
	printf("ft_strpbrk : %s\n", ft_strpbrk(argv[1], argv[2]));
	printf("Original : %s\n", strpbrk(argv[1], argv[2]));

	return (0);
}

/*
./a.out abc123abc 213

abc123abc
bc123abc
c123abc
123abc
ft_strpbrk : 123abc
Original : 123abc
*/
