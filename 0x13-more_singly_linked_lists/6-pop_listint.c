#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head data.
 * @head: head of the list.
 * Return: node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int value = 0;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = (*head)->next;
		value = (*head)->n;
		free(*head);
		(*head) = temp;
	}
	return (value);
}
