#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 */
void more_numbers(void)
{
	int number;
	int xtime = 1;

	while (xtime <= 10)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number < 10)
			{
				_putchar((number % 10) + '0');
			}
			else
			{
				_putchar((number / 10) + '0');
			}
		}

		_putchar('\n');
		xtime++;
	}
}

