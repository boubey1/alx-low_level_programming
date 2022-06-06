#include <unistd.h>

/**
 * main - this program will print "and that piece of art is useful"...
 *
 * Description: fonctions printf ant puts no allowed
 *
 * Return: the value of the return is 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
