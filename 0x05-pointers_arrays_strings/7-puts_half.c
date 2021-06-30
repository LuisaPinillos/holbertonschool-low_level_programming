#include "holberton.h"

/**
 * puts_half -prints half of a string
 *@str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int i, len, pri;

	len = 0;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 != 0)
	{
		pri = len - 1;
	}
	for (i = pri / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
