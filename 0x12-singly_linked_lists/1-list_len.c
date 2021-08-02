#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked lists
 * @h: pointer to element
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
	}
	else
	{
		while (h != NULL)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
