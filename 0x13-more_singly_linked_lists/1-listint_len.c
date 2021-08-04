#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
    size_t counter = 0;

    if (h != NULL)
    {
        while (h != NULL)
        {
            counter++;
            h = h->next;
        }
    }
    return (counter); 
}