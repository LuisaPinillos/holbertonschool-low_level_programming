#include "holberton.h"


/**
 * print_array - prints half of a string
 *@a: array
 *@n: positions
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
