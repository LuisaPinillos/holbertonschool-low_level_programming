#include "holberton.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while ((haystack[i] != '\0') || (needle[j] != '\0'))
	{
		i++;
		j++;
		if (haystack[i] == needle[j])
		{
			return (needle);
		}
	}
	return (0);
}

