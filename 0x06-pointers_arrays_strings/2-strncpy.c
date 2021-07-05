#include "holberton.h"

/**
 * *_strncpy - concatenates two strings
 *@dest: array
 *@src: positions
 *@n: number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	dest[i] = '\0';
	return (dest);
}
