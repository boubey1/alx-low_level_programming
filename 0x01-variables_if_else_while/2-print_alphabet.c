#include <stdio.h>
#include <unistd.h>

/**
 * main - printing alphabet in lowercase
 *
 * Description: only using function puts
 *
 * Return: The value of the main function return is 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <	'z' + 1)
	{
	putchar(letter);
	letter++;
	}
	if (letter == 'z' + 1)
	{
		putchar('\n');
	}
	return (0);
}
