#include "lists.h"

/**
 * free_listint - free a list
 * @head: head of the list
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
