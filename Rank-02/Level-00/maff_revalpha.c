// Assignment name  : maff_revalpha
// Expected files   : maff_revalpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet in reverse, with even letters in
// uppercase, and odd letters in lowercase, followed by a newline.

// Example:
// $> ./maff_revalpha | cat -e
// zYxWvUtSrQpOnMlKjIhGfEdCbA$

#include <unistd.h> // write

int		main(void)
{
	char		alpha;

	alpha = 'z' + 1; // +1 because I decrement inside conditions.
	while (alpha-- != 'A' + 32) // + 32 because it does an extra while
	{							//  due to where write is. (Can force it, and place a write before the loop!)
		write(1, &alpha, 1);
		if (alpha % 2) // alpha % 2 != 0 -> odd
			alpha += 32; // -> change to uppercase
		else  // alpha % 2 == 0 -> even
			alpha -= 32; // -> change to lowercase
	}
	write(1, "\n", 1);
	return (0);
}

// NOTE : Okay, there is a difference in the algorithm between maff_alpha and maff_revalalpha
// because I use the ascii value (decimal) instead of the order position. man ASCII <3
// A is 65, a is 97
// Z is 90, z is 122

// Another way to do that is to use another variable, i.e. an index :)
// example :
// int		main(void)
// {
// 	char		alpha;
// 	int			i;
	
// 	write(1, "z", 1);
// 	alpha = 'z';
// 	i = 0;
// 	while (++i != 26 && --alpha)
// 	{
// 		if (alpha % 2)
// 			alpha -= 32;
// 		else
// 			alpha += 32;
// 		write(1, &alpha, 1);
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

// You can use two tables (strings) too.
// like that :
// char upper[13] = "YWUSQOMKIGECA";
// char lower[13] = "zxvtrpnljhfdb";	in a while with two conditions like upper examples.
//
// or just -> char reverse[26] = "zYxWvUtSrQpOnMlKjIhGfEdCbA"; in a while
//
// see fizzbuzz

// Or be really lazy and do that... -> write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA", 26);
// But I don't think this is a good way to learn better practices and understand concepts.
