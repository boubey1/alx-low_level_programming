#include "main.h"

/*
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter < 'z' + 1)
	{
		_putchar(letter);
		if ((letter = 'z'))
		{
			_putchar('\n');
		}
		letter++;
	}
}
