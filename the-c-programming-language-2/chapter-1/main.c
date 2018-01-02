// The only way to learn a new programming language is by writing programs in it. 
// This is the big hurdle; to leap over it you have to be able to create the program
// text somewhere, compile it successfully, load it, run it, and find out where your
// output went. With these mechanical details mastered, everything else is com-
// paratively easy.

// cc main.c

#include <stdio.h>	// include information about standard library

// our program begins executing at the beginning of main
int main() // arguments
{
	// character string or string constant
	printf("hello, world\n"); // the loader must can find the implement of the function call.

	// Notice that \n represents only a single character. An escape sequence like
	// \n provides a general and extensible mechanism for representing hard-to-type
	// or invisible characters.

	// \c : warning: unknown escape sequence: '\c'
	printf("\t for tab, \bfor backspace, \" for the double quote, and \\ for the backslash itself. \\c is what? \n");
}

