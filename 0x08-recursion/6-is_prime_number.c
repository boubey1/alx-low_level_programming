#include "main.h"


/**
 * prime_div_check - Checks the divisibility of a number
 * @nb: number to divid
 * @prime_divisor: The divisor.
 *
 * Return: returns o is true, -1 if false
 */
int prime_div_check(int nb, int prime_divisor)
{
	if (nb % prime_divisor == 0)
		return (0);

	if (prime_divisor == nb / 2)
		return (1);

	return (prime_div_check(nb, prime_divisor + 1));
}

/**
 * is_prime_number - Checks which number is the prime.
 * @n: number to check if it is prime
 *
 * Return: 0 if prime, 1 if not
 */
int is_prime_number(int n)
{
	int prime_divisor = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (prime_div_check(n, prime_divisor));
}

