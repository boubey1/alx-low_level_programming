#include "variadic_functions.h"

void _char_printing(va_list arg);
void _int_printing(va_list arg);
void _float_printer(va_list arg);
void _string_printer(va_list arg);


/**
 * _int_printing - function print integers
 * @arg:  argument types
 *
 * Description: result
 */
void _int_printing(va_list arg)
{
	int nb;

	nb = va_arg(arg, int);
	printf("%d", nb);
}
/**
 * _string_printer - function print strings
 * @arg:  argument types
 *
 * Description: result
 */
void _string_printer(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
/**
 * _float_printer - function print float
 * @arg:  argument types
 *
 * Description: result
 */
void _float_printer(va_list arg)
{
	float nb;

	nb = va_arg(arg, double);
	printf("%f", nb);
}
/**
 * _char_printing - function print char
 * @arg:  argument types
 *
 * Description: result
 */
void _char_printing(va_list arg)
{
	char alphabet;

	alphabet = va_arg(arg, int);
	printf("%c", alphabet);
}




/**
 * print_all - function print anything
 * @format:  argument types
 * @...: arguments to print
 *
 * Description: result
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printing_t funcs[] = {
		{"c", _char_printing},
		{"i", _int_printing},
		{"f", _float_printer},
		{"s", _string_printer}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
