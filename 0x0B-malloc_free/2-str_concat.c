#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * str_concat - function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 * Return: s
 */

char *str_concat(char *s1, char *s2)
{
	int long1 = 0;
	int long2 = 0;
	int suma, a, b;
	char *cpstr;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	long1 = strlen(s1);
	long2 = strlen(s2);
	suma = long1 + long2;

	cpstr = malloc((sizeof(char) * suma) + 1);

	if (!cpstr)
	{
		return (NULL);
	}
	for (a = 0; a < long1; a++)
	{
		cpstr[a] = s1[a];
	}
	for (b = 0; b < long2; b++)
	{
		cpstr[a] = s2[b];
		a++;
	}
	cpstr[a] = '\0';
	return (cpstr);
}
