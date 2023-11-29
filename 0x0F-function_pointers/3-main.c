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
	int arg1, arg2;
	char *ope;

	arg1 = atoi(argv[1]);
	ope = argv[2];
	arg2 = atoi(argv[3]);

	if ((*ope == '/' && arg2 == 0) || (*ope == '%' && arg2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	
	else if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	else if (get_op_func(ope) == NULL || ope[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	else
	
	printf("%d\n", get_op_func(ope)(arg1, arg2));

	return (0);
}
