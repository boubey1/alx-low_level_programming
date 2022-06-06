#include <stdio.h>
#include <unistd.h>

/**
 * main - printing the combinaisons three digit numbers
 *
 * Description: only using function puts
 *
 * Return: The value of the main function return is 0
 */

int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	digit1 = 0;

	while (digit1 < 10)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');
				if (digit1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
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

