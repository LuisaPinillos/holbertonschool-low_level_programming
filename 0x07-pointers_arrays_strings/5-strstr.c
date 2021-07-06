#include "holberton.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0; int j = 0;

	while ((haystack[j] != '\0')||(needle[i] != '\0'))
	{
		if (needle[i] != haystack[j])
		{
			return (needle);
		}
	}
	return (0);
}
