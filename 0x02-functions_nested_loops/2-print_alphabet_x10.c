#include "main.h"

/**
 * print_alphabet_x10 - Printing the alphabet x10 times, lowercase
 *
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int n = 0;
	
	while (n++ <= 9)
	{
	       for (letter = 'a'; letter <= 'z'; letter++)
	       {
		       _putchar(letter);
		       _putchar('\n');
	       }
	}
}
