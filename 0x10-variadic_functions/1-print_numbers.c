#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: number of the arguments
 * @separator: char
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{

		num = va_arg(args, int);
		printf("%d", num);

		if ((i < (n - 1)) && (separator != NULL))

		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
