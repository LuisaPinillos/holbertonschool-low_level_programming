#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
		newnode = *head;
	}
	return (newnode);
}
