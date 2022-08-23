/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);

***********************************

atoi() ASCII to integer
	Convertir une chaîne de caractères (48 à 57) en entier, prend en compte
	le signe (positif '+' et négatif '-').

PARAMÈTRE
	str: contient la chaîne de caractères à convertir en une donnée de type
			int.

VALEUR RENVOYÉE
	Le résultat de la conversion ou 0 si la chaîne ne contient pas une donnée
	numérique entière.

ATTENTION
	Il n'est pas possible de distinguer la chaîne "0" d'une chaîne
	ne contenant pas un nombre entier.

CARACTÈRES À NE PAS TENIR EN COMPTE
	\a : appel (cloche) '7'
	\b : retour arrière '8'
	\t : tabulation horizontale '9'
	\n : saut de ligne '10'
	\v : tabulation verticale '11'
	\f : changement de page '12'
	\r : retour chariot '13'
	\e ou ' ' : expace '27'
*/

#include <stdio.h>
#include <stdlib.h>

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
	printf("Sign : %ld\n", sign);
	printf("Start : %ld\n", converted);
	while (*str >= '0' && *str <= '9') // check if characters are valid numbers
	{
		converted *= 10; // add zero at the end (see it like a place value chart/tableau de numération)
		printf("converted *= 10: %ld\n", converted);
		converted += *str++ - '0'; // calcul position ascii
		printf("converted += *str++ - '0': %ld\n", converted);
	}
	return (sign * converted);
}

int main(int argc, char **argv)
{
	printf("ft_atoi : %d\n", ft_atoi(argc[1]));
	printf("Original : %d\n", atoi(argc[1]));

	return (0);
}

// EXAMPLES 

// ./a.out 123  
// Sign : 1
// Start : 0
// converted *= 10 : 0
// converted += *str++ - '0' : 1
// converted *= 10 : 10
// converted += *str++ - '0': 12
// converted *= 10 : 120
// converted += *str++ - '0': 123
// 123

// Sign : -1
// Start : 0
// converted *= 10: 0
// converted += *str++ - '0': 1
// converted *= 10: 10
// converted += *str++ - '0': 12
// converted *= 10: 120
// converted += *str++ - '0': 123
// -123