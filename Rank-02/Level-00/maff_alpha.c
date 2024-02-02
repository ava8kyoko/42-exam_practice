// Assignment name  : maff_alpha
// Expected files   : maff_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet, with even letters in uppercase, and
// odd letters in lowercase, followed by a newline.

// even = pair
// odd = impair

// Example:
// $> ./maff_alpha | cat -e
// aBcDeFgHiJkLmNoPqRsTuVwXyZ$

#include <unistd.h> // write

int	main(void)
{
	char alpha;

	alpha = 'a' - 1;
	while (++alpha != 'z' + 1)
	{
		write(1, &alpha, 2);
		if (alpha % 2) // odd
			alpha -= 32;
		else // even
			alpha += 32;
	}
	write(1, "\n", 1);
	return (0);
}

    //   64  @    65  A    66  B    67  C    68  D    69  E    70  F    71  G
    //   72  H    73  I    74  J    75  K    76  L    77  M    78  N    79  O
    //   80  P    81  Q    82  R    83  S    84  T    85  U    86  V    87  W
    //   88  X    89  Y    90  Z    91  [    

	//  96  `    97  a    98  b    99  c   100  d   101  e   102  f   103  g
    //  104  h   105  i   106  j   107  k   108  l   109  m   110  n   111  o
    //  112  p   113  q   114  r   115  s   116  t   117  u   118  v   119  w
    //  120  x   121  y   122  z   123  { 
