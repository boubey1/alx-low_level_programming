#include "main.h"


/**
 * strlen_esc_wild_c - function to have length of a string
 * @str: The string to check
 *
 * Return: length.
 */
int strlen_esc_wild_c(char *str)
{
	int length = 0, addr = 0;

	if (*(str + addr))
	{
		if (*str != '*')
			length++;

		addr++;
		length += strlen_esc_wild_c(str + addr);
	}

	return (length);
}

/**
 * find_no_wild_c - checks to find non-wildcard character
 * @wild_str: The parameter
 *
 */

void find_no_wild_c(char **wild_str)
{
	if (**wild_str == '*')
	{
		(*wild_str)++;
		find_no_wild_c(wild_str);
	}
}


/**
 * check_for_wild - function to find if str matches the postfix of non wild
 * @str: The string
 * @prev: second parameter.
 *
 * Return: the postfix & a pointer
 */


char *check_for_wild(char *str, char *prev)
{
	int str_length = strlen_esc_wild_c(str) - 1;
	int prev_len = strlen_esc_wild_c(prev) - 1;

	if (*prev == '*')
		find_no_wild_c(&prev);

	if (*(str + str_length - prev_len) == *prev && *prev != '\0')
	{
		prev++;
		return (check_for_wild(str, prev));
	}

	return (prev);
}

/**
 * wildcmp - function to compare strings based on wildcard characters
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1, otherwise returns 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		find_no_wild_c(&s2);
		s2 = check_for_wild(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}


