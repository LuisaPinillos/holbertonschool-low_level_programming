#include "main.h"

/**
 * _isdigit - Returns 1 if the letter is mayus or 0 if is lower case
 * @c: The character in ASCII
 * Return: 1 greter than 0. 0 otherwise
 */

int _isdigit(int c)
{
	(void)c;
}

/**
 * _strlen - counts the number of characters.
 * @s: pointer to string.
 * Return: the counter.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _puts - prints a string
 *@s: string
 * Return: 0
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * *_strcpy - prints half of a string
 *@dest: array
 *@src: positions
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _atoi - Returns 1 if the letter is mayus or 
 * 0 if is lower case
 * @s: The character in ASCII
 * Return: 1 greter than 0. 0 otherwise
 */
int _atoi(char *s)
{
	(void)s;
}
