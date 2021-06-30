#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 *@str: string
 * Return: 0
 */

void puts2(char *str)
{
	int i, a;

	for (i = 0; str[i] != 0; i++)
	{
		a = i % 2;

		if (a == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
