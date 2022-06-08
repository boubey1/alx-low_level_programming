#include "main.h"

/**
 * jack_bauer - Print the minuts
 *
 */
void jack_bauer(void)
{
	int time;
	int minutes;
	
	for (time = 0; time <= 23; time++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((time / 10) + '0');
			_putchar((time % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
