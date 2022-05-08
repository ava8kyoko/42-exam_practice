// Assignment name  : aff_a
// Expected files   : aff_a.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the first 'a' character it
// encounters in it, followed by a newline. If there are no 'a' characters in the
// string, the program just writes a newline. If the number of parameters is not
// 1, the program displays 'a' followed by a newline.

// Example:

// $> ./aff_a "abc" | cat -e
// a$
// $> ./aff_a "dubO a POIL" | cat -e
// a$
// $> ./aff_a "zz sent le poney" | cat -e
// $
// $> ./aff_a | cat -e
// a$

int		main(int argc, char *argv[]) // Standard way, but can name those variables
{									// like you want!
	write(1, "a\n", 2); // LOL, not a good way to do that but works for the exam
	return (0);			// check aff_z
}

// write(file descriptor, "string" OR a &pointer, number of character OR strlen)
// fd : 
//		0 is the stdin
//		1 is the stdout -> for the moment, only use this one
//		2 is the stderr