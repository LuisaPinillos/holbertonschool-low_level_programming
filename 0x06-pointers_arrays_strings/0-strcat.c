#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 *@dest: array
 *@src: positions
 * Return: dest
 */

char *_strcat(char *dest, char *src)
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
		dest[len] = src[j];
	}
	return (dest);
}
