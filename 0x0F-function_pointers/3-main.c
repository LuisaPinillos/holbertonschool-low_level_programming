#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - evalue the contitions and prints the result.
 * @argc: Number of arguments
 * @argv: argument
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		int (*f)(int a, int b);
		int Number2;

		f = get_op_func(&*argv[2]);

		if (f == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		Number2 = atoi(*(argv + 3));

		if (Number2 == 0 && (*argv[2] == '%' || *argv[2] == '/'))
		{
			printf("Error\n");
			exit(100);
		}
		else
		{
			printf("%d\n", f(atoi(*(argv + 1)), Number2));
		}
		return (0);
	}
}
