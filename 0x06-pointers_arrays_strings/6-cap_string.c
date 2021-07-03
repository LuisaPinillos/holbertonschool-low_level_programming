#include "holberton.h"

/**
 * *cap_string - changes all lowercase letters to uppercase
 * @str: array
 *
 * Return: dest
 */

char *cap_string(char *str)
{

	int a, b;
	char points[13] = {
		',', ';', '.', '!', '?',
		'(', ')', '{', '}', ' ',
		'\t', '\n', '"'
	};
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; points[b] != '\0'; b++)
		{
			if (str[a] == points[b])
			{
				if (str[a + 1] >= 'a' && str[a + 1] <= 'z')
				{
					str[a + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
