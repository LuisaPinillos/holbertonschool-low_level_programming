#include "holberton.h"

/**
 * *_strncpy - copy a string
 *@s1: string one
 *@s2: string two
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, diff; 

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			diff = s1[i] - s2[j];
			if (diff >= 0)
			{
				i++;
			}
			else
			{
				i++;
			}
		}
	}
	return (diff);
}
