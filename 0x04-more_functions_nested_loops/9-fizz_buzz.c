#include <stdio.h>

/**
 * main - function used to print Fizz Buzz FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if ((count % 3) == 0 && (count % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((count % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((count % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", count);
		}
		if (count == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}

