#include <stdio.h>
#include <unistd.h>

/**
 * main - printing all combinaison of single digit number
 *
 * Description: only using function puts
 *
 * Return: The value of the main function return is 0
 */

int main(void)
{
	int digit;

	digit = 0;

	while (digit < 10)
	{
		putchar((digit % 10) + '0');
		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	digit++;
	}
	if (digit == 10)
	{
		putchar('\n');
	}
	return (0);
}

