#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @n: number of the arguments
 * @separator: char
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string = 0;
	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if ((i < (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
