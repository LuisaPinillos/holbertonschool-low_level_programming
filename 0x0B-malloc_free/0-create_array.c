#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array -  function that creates an array of chars
 * @c: Array
 * @size: the size of the memory to print
 * Return: pointer a
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
