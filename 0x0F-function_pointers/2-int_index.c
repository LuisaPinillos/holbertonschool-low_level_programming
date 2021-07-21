#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: fuction a pointer
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && size != 0 && cmp != NULL)
	{
		int rec_array, position;

		for (rec_array = 0; rec_array < size; rec_array++)
		{
			position = cmp(array[rec_array]);

			if (position == 1)
			{
				return (rec_array);
			}
		}
		if (position == 0)
		{
			return (-1);
		}
	}
	return (-1);
}
