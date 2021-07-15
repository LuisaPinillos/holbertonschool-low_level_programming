#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i, a, result;
	int suma1 = 0, suma2 = 0;
	char *s;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = '\0';
		s2 = '\0';
	}
	if (s1 != NULL && s2 == 0)
	{
		s1 = '\0';
		s2 = '\0';
	}
	if (s1 == 0 && s2 != NULL)
	{
		s1 = '\0';
		s2 = '\0';
	}
	suma1 = strlen(s1);
	suma2 = strlen(s2);
	result = suma1 + suma2;
	s = malloc((sizeof(char) * result) + 1);
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < suma1; i++)
	{
		s[i] = s1[i];
	}
	for (a = 0; a < suma2; a++, i++)
	{
		s[i] = s2[a];
	}
	s[i] = '\0';
	return (s);
}
