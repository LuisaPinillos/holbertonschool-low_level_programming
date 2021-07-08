#include "holberton.h"

/**
 * factorial - factorial of a number.
 *@n: number
 * Return: Always 0.
 */

int factorial(int n)
{
	int fact;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
