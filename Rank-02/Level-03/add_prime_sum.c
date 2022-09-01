/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit

--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.
If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.
Yes, the examples are right.

Examples:
$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>

--------------------------------------------------------------------------------

Various algorithms have been formulated in an attempt to generate ever-larger prime numbers. 
For example, suppose "n" is a whole number, and it is not yet known if n is prime or composite.
First, take the square root -- or the 1/2 power -- of n; then round this number up to the next 
highest whole number and call the result m. Then find all of the following quotients:

qm = n / m
q(m-1) = n / (m-1)
q(m-2) = n / (m-2)
q(m-3) = n / (m-3)
. . .
q3 = n / 3
q2 = n / 2

The number n is prime if -- and only if -- none of the q's, as derived above, are whole numbers.

https://www.techtarget.com/whatis/definition/prime-number
*/

#include <stdlib.h> // exit // noreturn void exit(int status);
#include <unistd.h> // write

int	ft_atoi(const char *str)
{
	long	converted;
	long	sign;

	converted = 0;
	sign = 1;
	while (*str >= 9 && *str <= 13 || *str == ' ')  // avoid those characters
		str++;
	if (*str == '-' || *str == '+') // sign convertion
	{
		if (*str++ == '-') // turn to negative number
			sign = -1;
	}
	while (*str >= '0' && *str <= '9') // check if characters are valid numbers
	{
		converted *= 10; // add zero at the end (see it like a place value chart/tableau de numération)
		converted += *str++ - '0'; // calcul position ascii
	}
	return (sign * converted);
}

int		check_if_prime(unsigned long number)
{
	size_t			i;
	unsigned int	m; //  then round n up to the next highest whole number and call the result m
	float			quotient;
	
	i = 1;
	m = number - 1;
	quotient = 0;
	while (quotient == (long)quotient)
		quotient = number / (m - i++);
	return ((int)quotient);
}

int		add_prime_sum(char *str)
{
	long	number;

	number = atoi(str);
	if (number <= 1 && check_if_prime(number)) // A prime number is a whole number greater than 1 whose only factors are 1 and itself. 
		return (0);
	
}

int		main(int argc, char **argv)
{
	if (argc != 2 || !add_prime_sum(argv[1]));
		write(1, "0\n", 2);
	return (0);
}

// Prime numbers can be used for a number of reasons. For example, some types of cryptography will use prime numbers.
// https://www.techtarget.com/searchsecurity/feature/Cryptography-basics-Symmetric-key-encryption-algorithms