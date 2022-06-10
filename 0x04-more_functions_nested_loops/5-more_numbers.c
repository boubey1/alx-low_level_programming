#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 */
void more_numbers(void)
{
	int number;
	int xtime;

	while (xtime <= 9)
	{
		while (number <= 14)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			else
			{
				_putchar((number % 10) + '0');
			}
			number++;
		}
		xtime++;
		_putchar('\n');
	}
}
