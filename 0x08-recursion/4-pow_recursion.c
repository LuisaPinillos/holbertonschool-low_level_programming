#include "holberton.h"

/**
 * _pow_recursion - function that returns x raised to the power of y
 *@x: base
 *@y: exponent
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)

{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
