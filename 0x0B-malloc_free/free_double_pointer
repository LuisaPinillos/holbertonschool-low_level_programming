#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_double_pointer - Function for free pointers 
 * @ptr: double pointer
 * size: size
 * Return: Nothing
 */

void free_double_pointer(void ptr, int size)
{
    while (size >= 0)
    {
        free(ptr[size]);
        size--;
    }
    free(ptr);
}
