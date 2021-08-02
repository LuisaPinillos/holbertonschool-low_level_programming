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
 * add_node - function that adds a new node at the
 * beginning of a list_t list
 * @head: beggining node
 * @str: string
 * Return: the direction of the initial node creted
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t  *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->str = strdup(str);
		newnode->next = *head;
		newnode->len = len(str);
		*head = newnode;
	}
	return (newnode);
}
