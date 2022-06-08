#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 *
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter < 'z' + 1)
	{
		_putchar(letter);
		if ((letter == 'z'))
		{
			_putchar('\n');
		}
		letter++;
	}
}
