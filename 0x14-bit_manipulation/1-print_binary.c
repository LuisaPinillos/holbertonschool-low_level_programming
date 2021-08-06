#include "main.h"

/**
 * print_binary - function that convert decimal to binary
 * @n: number
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = n;

	while ((temp >>= 1) > 0)
	{
		i++;
	}
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}

