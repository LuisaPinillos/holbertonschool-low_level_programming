#include "holberton.h"

/**
 * _islower - shows 1 if c is lower and  shows 0 in otherwise
 * @c: The character in ASCII
 * Return: 1 for lowercase. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
