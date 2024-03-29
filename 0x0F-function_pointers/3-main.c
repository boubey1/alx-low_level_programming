#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to print the result operations
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int dev1, dev2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	dev1 = atoi(argv[1]);
	op = argv[2];
	dev2 = atoi(argv[3]);

	if ((*op == '/' && dev2 == 0) || (*op == '%' && dev2 == 0))
	{
		printf("Error\n");
		exit(100);
	}


	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	printf("%d\n", get_op_func(op)(dev1, dev2));

	return (0);
}
