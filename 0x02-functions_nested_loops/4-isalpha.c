#include "holberton.h"

/**
 * _isalpha - shows 1 if c is a letter lower or upper and shows 0 otherwise
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
