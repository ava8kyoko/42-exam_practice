// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).
// Your function must be declared as follows:
// int    ft_strcmp(char *s1, char *s2);

// --------------------------------------------------------------------------------

// NAME
//      strcmp - compare strings
// DESCRIPTION
//      The strcmp() functions lexicographically compare the null-
//      terminated strings s1 and s2.
// RETURN VALUES
//      The strcmp() function returns an integer greater than,
//      equal to, or less than 0, according as the string s1 is greater than,
//      equal to, or less than the string s2.  The comparison is done using
//      unsigned characters, so that `\200' is greater than `\0'.

// https://www.youtube.com/watch?v=ESfb5JzNg8Y

#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int		main(int argc, char **argv)
{
	printf("ft_strcmp : %d\n", ft_strcmp(argv[1], argv[2]));
	printf("Original : %d\n", strcmp(argv[1], argv[2]));

	return (0);
}