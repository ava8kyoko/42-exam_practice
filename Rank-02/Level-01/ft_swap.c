// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:
// void	ft_swap(int *a, int *b);

#include <stdio.h> // printf

void	swap_XOR_toggling(int *a, int *b)
{
	if (*a == *b)
		return ;
	*a ^= *b ^= *a ^= *b;
}

void	swap_bitwise_operator(int *a, int *b)
{
	if (*a == *b)
		return ;
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void	swap_temp(int *a, int *b)
{
	int temp;

	if (*a == *b) // !*a || !*b check if * exist?
		return ;
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int a = 'a';
	int b = 'b';
	printf("BEFORE : %c, %c\n", a, b);
	swap_temp(&a, &b);
	printf("AFTER : %c, %c\n", a, b);

	int c = 'c';
	int d = 'd';
	printf("BEFORE : %c, %c\n", c, d);
	swap_bitwise_operator(&c, &d);
	printf("AFTER : %c, %c\n", c, d);

	int e = 'e';
	int f = 'f';
	printf("BEFORE : %c, %c\n", e, f);
	swap_XOR_toggling(&e, &f);
	printf("AFTER : %c, %c\n", e, f);

	int g = 'g';
	int h = 'g';
	printf("BEFORE : %c, %c\n", g, h);
	swap_temp(&g, &h);
	printf("AFTER : %c, %c\n", g, h);
	return (0);
}
