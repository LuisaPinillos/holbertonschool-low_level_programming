#include "holberton.h"

/**
 * print_sign - shows 1 if n is greater than 0 shows 0 otherwise
 * @n: The character in ASCII
 * Return: 1 greter than 0. 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
