#include "main.h"

/**
 * main - function to print only positive numbers
 * @argc: give the number of arguments in the function
 * @argv: is an array of type char of pointers to the arguments
 *
 * Return: If non-digits returns 1, otherwise returns 0
 */

int main(int argc, char *argv[])
{
	int nb, element, add = 0;

	for (nb = 1; nb < argc; nb++)
	{
		for (element = 0; argv[nb][element]; element++)
		{
			if (argv[nb][element] < '0' || argv[nb][element] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[nb]);
	}

	printf("%d\n", add);

	return (0);
}


