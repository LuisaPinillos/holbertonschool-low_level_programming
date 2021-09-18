#include "lists.h"

/**
 * dlistint_len - Number of elements in a linked dlistint_t list.
 * @h: head of the list
 * Return: counter
 */

size_t dlistint_len(const dlistint_t *h)
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
