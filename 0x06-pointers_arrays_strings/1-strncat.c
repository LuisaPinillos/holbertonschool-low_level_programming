#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 *@dest: array
 *@src: positions
 *@n: number
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++, len++)
	{
		if (j <= n)
		{
			dest[len] = src[j];
		}
	}
	return (dest);
}
