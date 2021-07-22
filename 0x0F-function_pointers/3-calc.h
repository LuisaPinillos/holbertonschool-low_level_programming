#ifndef Calculadora
#define Calculadora

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int Number1, int Number2);
} op_t;

/* Prototipos */
int op_add(int Number1, int Number2);
int op_sub(int Number1, int Number2);
int op_mul(int Number1, int Number2);
int op_div(int Number1, int Number2);
int op_mod(int Number1, int Number2);
int (*get_op_func(char *s))(int, int);

#endif
