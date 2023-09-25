#include "lists.h"  /* Include the header file where listint_t is defined */

/**
* reverse_listint - Reverses a listint_t linked list.
* @head: A pointer to a pointer to the head of the list.
*
* Return: A pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next_node;

/* Iterate through the list to reverse the pointers */
while (current != NULL)
{
next_node = current->next; /* Store the next node */

current->next = prev; /* Reverse the next pointer of the current node */

prev = current; /* Move prev to the current node */
current = next_node; /* Move current to the next node */
}

*head = prev; /* Update the head to point to the new first node (previously the last node) */

return (*head);
}
