#include "main.h"
#include <stdlib.h>

/**
 * _strdup : a function to returns a pointer for an allocated
 * memory
 * @str: the string to whom a memory mush be allocated
 *
 * Return: the address of the memory allocated
 */

char *_strdup(char *str)
{
int i = 0;
char *str_returned;

if (str == NULL)
return (NULL);

while (str[i] != '\0')
{
    i++;
}

str_returned = malloc(sizeof(char) * (i + 1));

if (str_returned == NULL)
{
    return (NULL);
}

i = 0;

while (str[i] != '\0')
{
    str_returned[i] = str[i];
    i++;
}
str_returned[i] = '\0';

return (str_returned);

}
