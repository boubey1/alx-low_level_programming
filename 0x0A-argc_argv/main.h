#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * HEADER - header filer of all the prototypes
 * @argc: give the number of arguments in the function
 * @argv: is an array of type char of pointers to the arguments
 * Description: used in inclusion of all the program files
 * Return: 0
 */

int printf_all_arg(int argc, char *argv[]);
int print_rlt_mult(int argc, char *argv[]);
int printf_pnumber(int argc, char *argv[]);
int name_is(int __attribute__((__unused__)) argc, char *argv[]);
int printf_arg(int argc, char __attribute__((__unused__)) *argv[]);


#endif

