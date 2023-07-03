#include "main.h"

/**
 * main - Gives the minimum coins number to
 *        do the change
 * @argc: give the number of arguments in the function
 * @argv: is an array of type char of pointers to the arguments
 *
 * Return: if error returns 1, otherwise returns 0
 */

int main(int argc, char *argv[])
{
	int value_cents, nb_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value_cents = atoi(argv[1]);

	while (value_cents > 0)
	{
		nb_coins++;
		if ((value_cents - 25) >= 0)
		{
			value_cents -= 25;
			continue;
		}
		if ((value_cents - 10) >= 0)
		{
			value_cents -= 10;
			continue;
		}
		if ((value_cents - 5) >= 0)
		{
			value_cents -= 5;
			continue;
		}
		if ((value_cents - 2) >= 0)
		{
			value_cents -= 2;
			continue;
		}
		value_cents--;
	}

	printf("%d\n", nb_coins);

	return (0);
}

