#include "holberton.h"

/**
 * *leet - changes something letters of the string
 * @str: array
 *
 * Return: str
 */

char *leet(char *str)
{
	int i, b;
	char letters[13] = {"aAeEoOtTlL"};
	char numbers[13] = {"4433007711"};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (i = 0; b < 10; b++)
		{
			if (str[i] == letters[b])
			{
				str[i] = numbers[b];
			}
		}
	}
	return (str);
}
