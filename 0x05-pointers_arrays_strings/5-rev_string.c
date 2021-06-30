#include "holberton.h"

/**
 * rev_string - reverses a string
 *@s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int len;
	int i, b, tem;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	len--;
	for (b = 0; b < len; b++)
	{
		tem = s[b];
		s[b] = s[len];
		s[len] = tem;
		len--;
	}
}
