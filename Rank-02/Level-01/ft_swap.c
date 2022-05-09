// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:
// void	ft_swap(int *a, int *b);

#include <stdio.h> // printf

// Toggling a bit means that if K-th bit is 1, then change it to 0 and if it is 0 then change it to 1.
// https://en.wikipedia.org/wiki/Bit_manipulation
// https://en.wikipedia.org/wiki/Bitwise_operation
// https://stackoverflow.com/questions/47981/how-do-you-set-clear-and-toggle-a-single-bit
// https://www.geeksforgeeks.org/set-clear-and-toggle-a-given-bit-of-a-number-in-c/

// https://www.programiz.com/c-programming/bitwise-operators#xor
// ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite.
// 0 + 0 = 0
// 1 + 1 = 0
// 0 + 1 = 1
// 1 + 0 = 1
void	swap_XOR_toggling(int *a, int *b) // with bitwise operator
{
	if (*a == *b)
		return ;
	*a ^= *b ^= *a ^= *b;

	// Same as :
	// *a ^= *b;
	// *b ^= *a;
	// *a ^= *b;

	// Same add :
	// *a = *a ^ *b;
	// *b = *a ^ *b;
	// *a = *a ^ *b;
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
