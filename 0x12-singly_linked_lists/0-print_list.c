#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 *@h: pointer to head
 * Return: numbers of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		printf("[0] (nil)");
	else
	{
		while (h != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
