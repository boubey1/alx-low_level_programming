#include <stdio.h>
#include <unistd.h>

/**
 * main - printing all the numbers base 16
 *
 * Description: only using function puts
 *
 * Return: The value of the main function return is 0
 */

int main(void)
{
	int digit = 0;

	while (digit < 16)
	{
		if (digit < 10)
		{
			putchar(digit % 10 + '0');
		}
		else if (digit >= 10)
		{
			putchar('a' + digit % 10);
		}
	digit++;
	}
	if (digit == 16)
	{
		putchar('\n');
	}
	return (0);
}
