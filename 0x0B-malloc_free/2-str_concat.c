#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate two differents strings.
 * @s1: first string - first in line
 * @s2: second string - comes after the first string s1
 *
 * Return: NULL when the operation fails
 *         When successful returns a pointer  to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *fusion;
	int i;
    int j = 0,
    int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	fusion = malloc(sizeof(char) * len);

	if (fusion == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		fusion[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		fusion[j++] = s2[i];

	return (fusion);
}
