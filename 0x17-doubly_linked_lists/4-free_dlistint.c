#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: head of the list
 * Return: Always 0.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
