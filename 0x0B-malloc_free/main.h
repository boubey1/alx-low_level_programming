#ifndef MAIN_H
#define MAIN_H

/**
 * Header: main.h
 * Desc: Header file For declaration of prototypes of all the function
 * used in the 0x0B-malloc_free project
 */


int _putchar(char a);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
