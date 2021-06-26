#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The character in ASCII
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int lastd = n % 10;

	if (n < 0)
	{
		lastd = lastd * -1;
		_putchar(lastd + '0');
		return (lastd);
	}
	else
	{
		_putchar(lastd + '0');
		return (lastd);
	}
}
