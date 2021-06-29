#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *@s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int len;
	int i;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
