#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: head of the list
 * Return: counter
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
