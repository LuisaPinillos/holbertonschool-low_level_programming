#include "holberton.h"

/**
 * *_strcmp - function that compares two strings.
 *@s1: string one
 *@s2: string two
 * Return: diff
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;
	int diff = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				return (0);
			}
			else
			{
				diff = s1[i] - s2[j];
				return (diff);
			}
		}
	}
	return (0);
}
