#include <stdio.h>

/**
 * main - the function prints only the name of the file which contains
 * 		the program compiled and a new line at the end of the name
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
