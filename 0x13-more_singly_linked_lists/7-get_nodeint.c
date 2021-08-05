#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: head of the list.
 * @index: number of the nodo.
 * Return: the nodo's data.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int iterator = 0;

	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		while (iterator == index)
		{
			iterator++;
			temp = temp->next;
		}
	}
	return (temp);
}
