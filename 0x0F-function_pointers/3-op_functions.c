#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - compute the sum of two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - compute the difference of two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - compute the product of two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - compute the quotion of 2 numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - compute the modulo of two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
