#include "main.h"

/**
 * main - function to print the result of a
 *      multiplication of two digits
 * @argc: give the number of arguments in the function
 * @argv: is an array of type char of pointers to the arguments
 *
 * Return: returns 0 if success, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int nb1, nb2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	result = nb1 * nb2;

	printf("%d\n", result);

	return (0);
}

