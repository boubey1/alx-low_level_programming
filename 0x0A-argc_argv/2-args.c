#include "main.h"

/**
 * main - function to print all arguments that are received
 * @argc: give the number of arguments in the function
 * @argv: is an array of type char of pointers to the arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int argument;

	for (argument = 0; argument < argc; argument++)
		printf("%s\n", argv[argument]);

	return (0);
}

