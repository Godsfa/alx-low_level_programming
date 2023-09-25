#include <stdlib.h>
#include "lists.h"  /* Include the header file where listint_t is defined */

/**
* free_listint_safe - Frees a listint_t linked list safely.
* @h: A pointer to a pointer to the head of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t count = 0;

if (h == NULL || *h == NULL)
return 0;

current = *h;

while (current != NULL)
{
next = current->next; /* Store the next node before freeing the current one */
free(current);        /* Free the current node */
current = next;       /* Move to the next node */

count++; /* Increment the count of freed nodes */
}

*h = NULL; /* Set the head to NULL after freeing all nodes */

return (count);
}
