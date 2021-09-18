#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: head of the list
 * Return: counter
 */

size_t print_dlistint(const dlistint_t *h)
{
    int i = 0;

	while (h != NULL)
	{
		if (h->next)
		{
			printf("[%d]\n", h->n);
		}
		else
		{
            printf("[%d]\n", 0);
		}
		i++;
		h = h->next;
	}
	return (i);
}
