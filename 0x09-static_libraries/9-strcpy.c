#include "main.h"

/**
 * _strcpy - cpy strings
 * @dest: value to copy the string to
 * @src: The source string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
