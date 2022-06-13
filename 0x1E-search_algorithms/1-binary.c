#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * printarray - print array
 * @array: Pointer to array to be searched
 * @size: Size of array to be search of type size_t
 * Return: 0
 */

void printarray(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != (size - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * jump_search - Function that searches for a value in a sorted array.
 * @array: Pointer to array to be searched
 * @size: Size of array to be search of type size_t
 * @value: value to be search inside array
 * Return: Return index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t hight;
	size_t mid;

	if (array != NULL)
	{
		low = 0;
		hight = size - 1;

		while (low <= hight)
		{
			printarray(array + low, hight + 1 - low);
			mid = (low + hight) / 2;

			if (array[mid] < value)
			{
				low = mid + 1;
			}
			else if (array[mid] > value)
			{
				hight = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
