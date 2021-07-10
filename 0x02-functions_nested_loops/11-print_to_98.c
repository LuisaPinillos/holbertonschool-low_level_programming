#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: integer
 * Return: Always 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		n++;
		printf("%d, ", n - 1);
	}
	while (n > 98)
	{
		n--;
		printf("%d, ", n + 1);
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
