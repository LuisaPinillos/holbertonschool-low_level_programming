#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: head of the list
 * Return: Always 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
