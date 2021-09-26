#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

/**
 * _isalpha - shows 1 if c is a letter lower 
 * or upper and shows 0 otherwise
 * @c: The character in ASCII
 * Return: 1 for lowercase or uppercase. 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _abs - Computes the absolute value of an integer
 * @n: The character in ASCII
 * Return: 1 greter than 0. 0 otherwise
 */

int _abs(int n)
{
	int result = n * -1;

	if (n < 0)
	{
		return (result);
	}
	else if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}

/**
 * _isupper - Returns 1 if the letter is mayus or 0 if is lower case
 * @c: The character in ASCII
 * Return: 1 greter than 0. 0 otherwise
 */

int _isupper(int c)
{
	(void)c;
}
