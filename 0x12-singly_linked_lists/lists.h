#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <unistd.h>

/**
 * struct list_s - struct list
 * @str: the linked string 
 * @len: the length of the linked string
 * @next: next node pointing
 *
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
void print_number(int num);


#endif

