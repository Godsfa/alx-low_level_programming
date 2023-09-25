#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - Frees a listint_t list.
* @head: A pointer to the head of the list.
*/
void free_listint(listint_t *head)
{
listint_t *current, *temp;

current = head;

while (current != NULL)
{
temp = current->next; /*Store the next node's address*/
free(current);        /*Free the current node*/
current = temp;       /* Move to the next node*/
}

head = NULL;
}
