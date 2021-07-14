#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory.
 * @str: string
 * Return: the copy of the string s
 */

char *_strdup(char *str)
{
	char *s;
	int i, x;

	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	s = malloc(sizeof(char) * i);
	if (s == 0)
	{
		return (NULL);
	}
	for (x = 0; x <= i; x++)
	{
		s[x] = str[x];
	}
	return (s);
}
