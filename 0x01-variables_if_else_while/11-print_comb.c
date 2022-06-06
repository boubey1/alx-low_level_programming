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
	
	for (digit = 0; digit <= 9; digit++)
	{
		putchar((digit % 10) + '0');
		if (digit == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	
	putchar('\n');
	return (0);
}

