#include "3-calc.h"

/**
 * get_op_func - function to find the function to operate
 * @s: The operator
 *
 * Return: A pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (*(ops[i].op) != *s && ops[i].op != NULL)
	{
		i++;

		
	}
	return (ops[i].f);
}
