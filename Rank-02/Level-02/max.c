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
	while (*tab && len--)
	{
		if (*tab > largest)
			largest = *tab;
		tab++;
	}
	return (largest);
}

int		main(void)
{
	int tab[10] = {111111, 10, 8, 3, 1, 1000, 4, 6, 5, 99999};
	printf("%d\n", max(tab, 10));
	return (0);
}
