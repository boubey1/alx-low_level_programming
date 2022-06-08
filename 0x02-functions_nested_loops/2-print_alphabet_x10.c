#include "main.h"

/**
 * print_alphabet_x10 - Printing the alphabet 10 times, lowercase
 *
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int n = 0;

	while (n <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			if (letter == 'z')
			{
				_putchar('\n');
			}
		letter++;
		}
	n++;
	}
}
