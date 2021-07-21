#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element of an array
 * @ar: array
 * @si: pointer function
 * @ac: fuction a pointer
 * Return: Nothing.
 */

void array_iterator(int *ar, size_t si, void (*ac)(int))	
{
	if (ac != NULL && ar != NULL && si != 0)		
	{
		size_t x = 0;
		
		for (; x < si; x++)
		{	
			ac(ar[x]);		
		}
	}
}
