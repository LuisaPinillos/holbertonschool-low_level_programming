#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of integers.
 * @array: Pointer to array to be searched
 * @size: Size of array to be search of type size_t
 * @value: value to be search inside array
 * Return: Return index of value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{

	size_t i;
	int temp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			temp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, temp);
			if (temp == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
