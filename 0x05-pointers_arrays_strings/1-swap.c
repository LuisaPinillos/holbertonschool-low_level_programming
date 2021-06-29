#include "holberton.h"

/**
 * swap_int - swaps the values of a to b
 *@a: value
 *@b: value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;

}
