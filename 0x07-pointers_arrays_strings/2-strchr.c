#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: array
 * @c: character
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i, m;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	for (m = 0; m <= i; m++)
	{
		if (s[m] == c)
		{
			return (s + m);
		}
	}
	return (0);
}
