#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *newnode = NULL;

    newnode = (listint_t *)malloc(sizeof(listint_t));

    if (newnode == NULL)
    {
        return (NULL);
    }
    else
    {
        
        if (*head == NULL)
        {
            newnode->n = n;
            *head = newnode;
            newnode->next = NULL;
        }
        else
        {
            newnode->next = (*head);
            (*head) = newnode;
            newnode->n = n;
        }
    }
    return (*head);
}