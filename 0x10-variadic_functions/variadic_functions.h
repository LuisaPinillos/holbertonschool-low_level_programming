#ifndef VARIADIC_FUNCTION
#define VARIADIC_FUNCTION

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/* PROTOTIPES */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
