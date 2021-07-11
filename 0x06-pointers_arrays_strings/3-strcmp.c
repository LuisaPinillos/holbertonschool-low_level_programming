#include "holberton.h"

/**
 * *_strcmp - function that compares two strings.
 *@s1: string one
 *@s2: string two
 * Return: diff
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *s1 && *s2 && *s1 == *s2; i++)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}	
    
