#include "lists.h"

/**
 * len - function that return the lengh of a string
 * @str: string
 * Return: the lengh.
 */

int len(const char *str)
{
	int len;
	int i;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - function that add node at the en the list
 * @str: string
 * @head: pointer to beggining node
 * Return: the address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnodend;
	list_t *temp;

	newnodend = malloc(sizeof(list_t));
	if (newnodend == NULL)
	{
		return (NULL);
	}
	else
	{
		newnodend->str = strdup(str);
		newnodend->next = NULL;
		newnodend->len = len(str);
		temp = *head;

		if (*head == NULL)
		{
			*head = newnodend;
		}
		else
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newnodend;
		}
	}
	return (newnodend);
}
