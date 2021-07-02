#include "holberton.h"

/**
 * times_table - omputes the absolute value of an integer
 *
 * Return: nothing
 */

void times_table(void)
{
	int f, n;
	int mul;

	for (f = 0; f <= 9; f++)
	{
		for (n = 0; n <= 9; n++)
		{
			mul = f * n;

			if (n <= 0)
			{
				_putchar(mul + 48);
			}
			else if (mul <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + 48);
			}
			else if (mul > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul / 10 + 48);
				_putchar(mul % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
