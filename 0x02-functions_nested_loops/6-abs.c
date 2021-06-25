#include "holberton.h"

/**
 * _abs - omputes the absolute value of an integer
 * @n: The character in ASCII
 * Return: 1 greter than 0. 0 otherwise
 */

int _abs(int n)
{
	int result = n * -1;

	if (n < 0)
	{
		return (result);
	}
	else if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
