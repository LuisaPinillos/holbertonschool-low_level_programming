#include "holberton.h"

/**
 * *_strncpy - copy a string
 *@dest: array
 *@src: positions
 *@n: number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		if (j < i)
		{
			dest[j] = src[j];
		}
		else
		{
			dest[j] = '\0';
		}
	}
	return (dest);
}

