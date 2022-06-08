#include "main.h"

/**
 * times_table - Print the times tables 0 to 9
 *
 */
void jack_bauer(void)
{
	int number = 0;
	int mult;
	int prod;
	
	for (number = 0; number <= 9; number++)
	{
		_putchar('0');
		
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = number * mult;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}

			_putchar((minutes % 10) + '0');
		}
		_putchar('\n');
	}
}
