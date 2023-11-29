#include "variadic_functions.h"

/**
 * print_strings - to print strings and a new line
 * @separator: element to printe in between the strings
 * @n: number of strings
 * @...: Additional strings to print
 *
 * Description: no ptinting if separator is NULL and print nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list element;
	char *str;
	unsigned int i = 0;

	va_start(element, n);

	while (i < n)
	{
		str = va_arg(element, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");

	va_end(element);
}
