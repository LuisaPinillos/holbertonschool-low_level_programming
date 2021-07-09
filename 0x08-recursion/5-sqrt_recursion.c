#include "holberton.h"

/**
 *squarer - square root of a number
 *@a: number
 *@b: number multiplied by the same
 * Return: a integer
 */

int squarer(int a, int b)
{
	int square;

	square = b * b;

	if (square == a)
	{
		return (b);
	}
	else if (square < a)
	{
		return (squarer(a, b + 1));
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion - square root of a number
 * @n: number
 * Return: a integer
 */

int _sqrt_recursion(int n)
{
	return (squarer(n, 1));
}
