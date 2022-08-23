/*

Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:

--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.
It must return its parameter.
Your function must be declared as follows:
char    *ft_strrev(char *str);

*/

#include <stdio.h> // printf

size_t	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;

	if (!str)
		return (0);
	i = -1;
	len = ft_strlen(str);
	printf("len : %d\n", len);
	printf("str: %s\n", str);
	while (++i < --len)
	{
		str[i] ^= str[len] ^= str[i] ^= str[len];
		printf("str: %s\n", str);
	}
	return (str);
}

int		main(int argc, char *argv[])
{
	printf("%s\n", ft_strrev(argv[1]));

	return (0);
}

/*
./a.out yolo   
len : 4
str: yolo
str: ooly
str: oloy
oloy

./a.out 54321EDCBA
len : 10
str: 54321EDCBA
str: A4321EDCB5
str: AB321EDC45
str: ABC21ED345
str: ABCD1E2345
str: ABCDE12345
ABCDE12345
*/