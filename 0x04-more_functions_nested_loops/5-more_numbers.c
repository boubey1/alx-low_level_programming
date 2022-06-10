#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 */
void more_numbers(void)
{
	int number = 0;
	int xtime = 1;

	while (xtime <= 10)
	{
		while (number <= 14)
		{
			if (number < 10)
			{
				_putchar((number % 10) + '0');
			}
			else
			{
				_putchar((number / 10) + '0');
			}
			number++;
		}
		xtime++;
		_putchar('\n');
	}
}
