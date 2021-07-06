#include "holberton.h"

/**
 * reverse_array - reverse an array
 *@a: pointer
 *@n: elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
