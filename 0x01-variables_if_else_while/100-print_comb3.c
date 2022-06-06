#include <stdio.h>
#include <unistd.h>

/**
 * main - printing the combinaisons two digit numbers
 *
 * Description: only using function puts
 *
 * Return: The value of the main function return is 0
 */

int main(void)
{
	int digit1;
	int digit2;

	digit1 = 0;

	while (digit1 < 10)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');
			if (digit1 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	digit1++;
	}
	if (digit1 == 10)
	{
		putchar('\n');
	}
	return (0);
}

