// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that determines if a given number is a power of 2.
// This function returns 1 if the given number is a power of 2, otherwise it returns 0.
// Your function must be declared as follows:
// int	    is_power_of_2(unsigned int n);

// --------------------------------------------------------------------------------

// n << 0 -> 2 x 1
// n << 1 -> 2 x 2
// n << 2 -> 2 x 2 x 2

// 0 = 0000 0000
// 1 = 0000 0001

// The output of bitwise AND is 1 if the corresponding bits of two operands is 1. 
// If either bit of an operand is 0, the result of corresponding bit is evaluated to 0.
// 0 + 0 = 0
// 0 + 1 = 0
// 1 + 0 + 0
// 1 + 1 = 1

// n & (n - 1) if not power of 2 
// https://stackoverflow.com/questions/1053582/how-does-this-bitwise-operation-check-for-a-power-of-2

// n & -(n) == n
// 0001 0000 = 16
// -(0001 0000) =	1110 1111 (  239)
//				  + 0000 0100 (+   1)
//				  = 1111 0000 (= 240)
// 16 & -(16) == 16
//   0001 0000
// & 1111 0000
//   0001 0000

// n & (n - 1)) == 0 is power of two
// 16 = 0000 1000
// 16 - 1 = 15
//  	  => 0000 1111
//   0001 0000
// & 0000 1111
//   0000 0000

#include <stdio.h> // printf (forbidden)

int		is_power_of_2(unsigned int n)
{
	return (n != 0 && !(n & (n - 1))); // https://www.quora.com/In-programming-what-does-n-n-return
}										// !(n & (n - 1)) same as (n & (n - 1) == 0)
		// return ((n & (-n)) == n);
				// 2's Complement of the number is (-n) and 
				// if the AND logic of nbr and it's 2's complement 
				// is number itself then its power of 2

int		main(void)
{
	int				i;
	unsigned long	n;  // strange behavior (-2147483648) with unsigned int

	// 1. output check all power of 2 in MAX_INT
	n = -1;
	while (++n <= 2147483648)
	{
		if (is_power_of_2(n))
			printf("%lu\n", n);
	}

	// 2. output check all power of 2 in MAX_INT
	// i = -1;
	// n = 0;
	// while (++i < 32)
	// 	printf("2^%i : %d\n", i, is_power_of_2(2^n));

	// 3. Check if number is a power of 2 of not
		// printf("%d\n", is_power_of_2(-2147483648));	//(-2147483648 works, what to do with negative numbers?)

	return (0);
}

// output :
// 1
// 2
// 4
// 8
// 16
// 32
// 64
// 128
// 256
// 512
// 1024
// 2048
// 4096
// 8192
// 16384
// 32768
// 65536
// 131072
// 262144
// 524288
// 1048576
// 2097152
// 4194304
// 8388608
// 16777216
// 33554432
// 67108864
// 134217728
// 268435456
// 536870912
// 1073741824
// 2147483648
