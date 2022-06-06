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
	char letter_low = 'a';
	char letter_upp = 'A';

	while (letter_low < 'z' + 1)
	{
	putchar(letter_low);
	letter_low++;
	}
	while (letter_upp < 'Z' + 1)
	{
	putchar(letter_upp);
	letter_upp++;
	}
	if (letter_upp == 'Z' + 1)
	{
		putchar('\n');
	}
	return (0);
}
