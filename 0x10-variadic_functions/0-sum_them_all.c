#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: number of the arguments
 * Return: add
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		int argument = 0;
		int addarg = 0;
		unsigned int i = 0;
		va_list args;

		va_start(args, n);

		for (; i < n; i++)
		{
			argument = va_arg(args, int);
			addarg += argument;
		}
		va_end(args);
		return (addarg);
	}
}
