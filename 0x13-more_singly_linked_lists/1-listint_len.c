#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: head of the list
 * Return: counter
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
