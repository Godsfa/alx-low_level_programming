#include <stddef.h>
#include "lists.h"

/**
* listint_len - Returns the number of elements in a listint_t list.
* @h: A pointer to the head of the list.
*
* Return: The number of elements in the list.
*/
size_t listint_len(const listint_t *h)
{
size_t node_count = 0; /*Initialize the node count to 0*/

while (h != NULL)
{
h = h->next;   /*Move to the next node*/
node_count++;  /* Increment the node count*/
}

return (node_count); /* Return the total number of nodes*/
}

