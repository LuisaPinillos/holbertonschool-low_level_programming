#include "lists.h"

/**
 * add_nodeint_end - add a node at end of the list
 * @head: head of the list
 * @n: number
 * Return: Always 0.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL;
	listint_t *temp = *head;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{

		(*head) = newnode;
		newnode->next = NULL;
		newnode->n = n;
		return (newnode);
	}
    /* Recorremos hasta el final */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

    /* agregamos el nodo */
	temp->next = newnode;
	newnode->next = NULL;
	newnode->n = n;
	return (newnode);
}
