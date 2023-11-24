#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function to concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: the length of the second string
 * Return: If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use
 * the entire string s2 if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = n, i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		len++;
		i++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	i = 0;
	while (s1[i])
	{
		str[len++] = s1[i];
		i++;
	}
	for (i = 0; s2[i] && i < n; i++)
		str[len++] = s2[i];
	str[len] = '\0';

	return (str);
}
