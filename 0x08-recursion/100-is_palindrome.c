#include "main.h"


/**
 * val_strlen - function to have the string's length
 * @s: string to check
 *
 * Return: length
 */

int val_strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += val_strlen(s + length);
	}

	return (length);
}

/**
 * test_palindrome - fuction to confirm if palindrome.
 * @s: parameter to check
 * @length: length of s
 * @addr: index of s
 *
 * Return:  1 if true, if false 0
 */

int test_palindrome(char *s, int length, int addr)
{
	if (s[addr] == s[length / 2])
		return (1);

	if (s[addr] == s[length - addr - 1])
		return (test_palindrome(s, length, addr + 1));

	return (0);
}

/**
 * is_palindrome - function to see the string is a palindrome.
 * @s: The string to check
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int addr = 0;
	int length = val_strlen(s);

	if (!(*s))
		return (1);

	return (test_palindrome(s, length, addr));
}


