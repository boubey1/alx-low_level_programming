#include <stdio.h>
#include <unistd.h>

/**
 * main - printing numbers
 *
 * Description: all single digit numbers of base 10 from 0
 *
 * Return: The value of the main function return is 0
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
		if (digit == 10)
		{
			putchar('\n');
		}
	}
	return (0);
}
