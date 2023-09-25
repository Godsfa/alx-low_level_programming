#include <stdio.h>
#include <stdlib.h>
#include "lists.h"  /* Include the header file where listint_t is defined */

/**
* insert_nodeint_at_index - Inserts a new node at a given position in a listint_t list.
* @head: A pointer to a pointer to the head of the list.
* @idx: The index where the new node should be added (starting at 0).
* @n: The integer value to be stored in the new node.
*
* Return: The address of the new node, or NULL if it fails.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp, *prev;
unsigned int i = 0;

/* Insert at the beginning */
if (idx == 0)
{
new_node = malloc(sizeof(listint_t)); /* Allocate memory for the new node */

if (new_node == NULL)
return NULL; /* Memory allocation failed */

new_node->n = n;       /* Assign the value n to the new node's n member */
new_node->next = *head; /* Link the new node to the current head */
*head = new_node;      /* Update the head to point to the new node */

return new_node; /* Return the address of the new element */
}

/* Insert at an intermediate position */
temp = *head;
prev = NULL;

while (temp != NULL && i < idx)
{
prev = temp;
temp = temp->next; /* Traverse to the node at the specified index */
i++;
}

if (temp == NULL && i == idx)
{
new_node = malloc(sizeof(listint_t)); /* Allocate memory for the new node */

if (new_node == NULL)
return NULL; /* Memory allocation failed */

new_node->n = n;       /* Assign the value n to the new node's n member */
new_node->next = NULL; /* Set the next pointer of the new node to NULL */
prev->next = new_node; /* Link the previous node to the new node */

return new_node; /* Return the address of the new element */
}

return NULL; /* Cannot insert at the specified index */
}
