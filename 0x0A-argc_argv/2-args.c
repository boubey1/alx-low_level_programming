#include "main.h"

/**
 * printf_all_arg - function to print all arguments that are received
 * @argc: give the number of arguments in the function
 * @argv: is an array of type char of pointers to the arguments
 *
 * Return: 0.
 */
int printf_all_arg(int argc, char *argv[])
{
	int argument;

	for (argument = 0; argument < argc; argument++)
		printf("%s\n", argv[argument]);

	return (0);
}

/**
 *main - to execute the program
 *
 */

void main(void)
{
	printf_all_arg(argc, argv);

}

