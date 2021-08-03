#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
    size_t counter = 0;

    if (h != NULL)
    {
        while (h != NULL)
        {
            printf("%d\n", h->n);
            counter++;
            h = h->next;
        }
    }
    return (counter); 
}