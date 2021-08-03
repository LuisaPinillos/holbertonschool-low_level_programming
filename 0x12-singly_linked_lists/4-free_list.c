#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: beginning of the list
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
