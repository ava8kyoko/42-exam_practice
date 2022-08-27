/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:
int		max(int* tab, unsigned int len);
The first parameter is an array of int, the second is the number of elements in
the array.
The function returns the largest number found in the array.
If the array is empty, the function returns 0.
*/

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	long		largest;

	if (!tab)
		return (0);
	largest = *tab;
	while (*tab)
	{
		if (*tab > largest)
			largest = *tab;
		tab++;
	}
	return (largest);
}

int		main(int argc, char **argv)
{
	printf("%d\n", max(argv[1], argc - 1));
	return (0);
}
