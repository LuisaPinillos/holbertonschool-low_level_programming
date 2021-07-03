#include "holberton.h"

/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @dest: array
 *
 * Return: dest
 */

char *string_toupper(char *dest)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i] >= 'a' && dest[i] <= 'z')
		{
			dest[i] -= 32;
		}
	}
	return (dest);
}
