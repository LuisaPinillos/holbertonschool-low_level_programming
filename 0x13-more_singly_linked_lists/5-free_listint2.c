#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of the list
 *
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = (*head);

	while ((*head) != NULL)
	{
		(*head) = (*head)->next;
		free(temp);
		temp = (*head);
	}
	*head = NULL;
}
