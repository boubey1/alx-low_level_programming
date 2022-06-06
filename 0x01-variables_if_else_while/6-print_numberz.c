#include <stdio.h>
#include <unistd.h>

/**
 * main - printing single digit from 0 to 9
 *
 * Description: only using function puts
 *
 * Return: The value of the main function return is 0
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit%10 + '0');
		digit++;
		if (digit == 10)
		{
			putchar('\n');
		}
	}
	return (0);
}
