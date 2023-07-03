#include "main.h"

/**
 * printf_arg - Prints the number of arguments passed to it.
 * @argc: give the number of arguments in the function
 * @argv: is an array of type char of pointers to the arguments
 *
 * Description: function
 * Return:  0.
 */
int printf_arg(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

/**
 *main - to execute the program
 *
 */

void main(void)
{
	printf_arg(argc, argv);
}

