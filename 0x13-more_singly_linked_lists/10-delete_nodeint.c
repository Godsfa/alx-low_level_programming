#include <stdio.h>
#include <stdlib.h>
#include "lists.h"  /* Include the header file where listint_t is defined */

/**
* delete_nodeint_at_index - Deletes the node at a given position in a listint_t list.
* @head: A pointer to a pointer to the head of the list.
* @index: The index of the node to be deleted (starting at 0).
*
* Return: 1 if the deletion succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i = 0;

if (*head == NULL)
return -1; /* List is empty, deletion failed */

current = *head;

if (index == 0)
{
*head = (*head)->next; /* Update the head to the next node */
free(current); /* Free the old head node */
return 1; /* Deletion succeeded */
}

while (current != NULL && i < index - 1)
{
current = current->next; /* Traverse to the node before the deletion point */
i++;
}

if (current == NULL || current->next == NULL)
return -1; /* Index out of bounds, deletion failed */

temp = current->next; /* Store the node to be deleted */
current->next = temp->next; /* Update the previous node's next pointer */
free(temp); /* Free the deleted node */

return 1; /* Deletion succeeded */
}
