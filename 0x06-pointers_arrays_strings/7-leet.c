#include "holberton.h"

/**
 * *leet - changes something letters of the string
 * @str: array
 *
 * Return: s
 */

char *leet(char *str)
{
	int i = 0;
	int b = 0;
	char letters[10] = {
		'a', 'A', 'e', 'E', 'o',
		'O', 't', 'T', 'l', 'L'
	};
	char numbers[10] = {
		'4', '4', '3', '3', '0', '0',
		'7', '7', '1', '1'
	};
	for (i = 0; str[i] != '\0'; i++)
	{
		for (b = 0; b < 10; b++)
		{
			if (str[i] == letters[b])
			{
				str[i] = numbers[b];
			}
		}
	}
	return (str);
}
