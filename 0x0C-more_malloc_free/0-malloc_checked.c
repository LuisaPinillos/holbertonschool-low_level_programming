#include "holberton.h"
#include "stdlib.h"

/**
 * malloc_checked - Chech Mallock
 * @b: size of the memory
 * Return: Always 98
 */

void *malloc_checked(unsigned int b)	
{
	if (b == 0)	
	{
		return (NULL);	
	}
	else	
	{
		void *memory_allocate = NULL;	
		memory_allocate = (void *)malloc(b);

		if (memory_allocate == NULL)
		{
			exit(98);
		}
		else
		{
			return (memory_allocate);
		}
	}
}
