#include "holberton.h"

/**
 * print_rev - prints a string
 *@s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
