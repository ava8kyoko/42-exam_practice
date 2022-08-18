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
	while (*str && *str >= '0' && *str <= '9') // check if characters are valid numbers
	{
		// if (sign == 1 && (converted * 10) + (*str - '0') < converted) // find the fucking reason
		// 	return (-1);
		// else if ( sign == -1 && (converted * 10) + (*str - '0') < converted) // fail
		// 	return (0);
		converted *= 10;
		converted += *str++ - '0';
	}
	return (sign * converted);
}

int main(int argv, char **argc)
{
	printf("%d\n", ft_atoi(argc[1]));

	return (0);
}