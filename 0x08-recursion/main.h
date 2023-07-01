#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * HEADER: main.h 
 * Description: Holds all the prototypes used
 */

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int square_of_nb(int nb, int init_root);
int prime_div_check(int nb, int prime_divisor);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
