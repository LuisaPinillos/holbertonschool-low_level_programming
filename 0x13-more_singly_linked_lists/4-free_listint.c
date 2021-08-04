#include "lists.h"

void free_listint(listint_t *head){

    listint_t* temp = head;

    while(head != NULL){

        head = head->next;
        free(temp);
        temp = head;
    }
}