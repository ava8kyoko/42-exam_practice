// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).
// The strcpy() function copies the string pointed to by src,
//        including the terminating null byte ('\0'), to the buffer pointed
//        to by dest.  The strings may not overlap, and the destination
//        string dest must be large enough to receive the copy.  Beware of
//        buffer overruns!  (See BUGS.)

// Your function must be declared as follows:
// char    *ft_strcpy(char *s1, char *s2);

#include <stdio.h> // printf

static char	*ft_strcpy(char *dest, char *src)
{
	int i;

	if (!dest || !src)
		return (0);
	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char		src[13] = "Super chat !";
	char		dest[13];
	printf("%s\n", src);
	ft_strcpy(dest, src);

	// ft_strcpy(dest, 0);

	printf("%s\n", dest);
	return (0);
}
