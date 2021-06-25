#include "holberton.h"

/**
 * print_last_digit - omputes the absolute value of an integer
 * @n: The character in ASCII
 * Return: 1 greter than 0. 0 otherwise
 */

int print_last_digit(int n)
{
	int mul = n * -1;

	if (n > 0)
	{
		_putchar((n % 10) + '0');
		return ((n % 10) + '0');
	}
	else if (n < 0)
	{
		_putchar((n % 10) + '0');
		return ((mul % 10) + '0');
	}
	else
	{
		_putchar('0');
		return ('0');
	}
}
