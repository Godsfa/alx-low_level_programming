#include <stdio.h>
#include <stdlib.h>
#include "lists.h"  /* Include the header file where listint_t is defined */

/**
* print_listint_safe - Prints a listint_t linked list safely.
* @head: A pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow_ptr, *fast_ptr;
size_t count = 0;

slow_ptr = fast_ptr = head;

/* Initialize slow_ptr and fast_ptr to the head of the list */
while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
{
printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
count++;

slow_ptr = slow_ptr->next;         /* Move one step at a time */
fast_ptr = fast_ptr->next->next;   /* Move two steps at a time */

/* If there's a loop, exit with status 98 */
if (slow_ptr == fast_ptr)
{
printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
exit(98);
}
}

/* Print the last node and return the count */
if (slow_ptr != NULL)
{
printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
count++;
}

return (count);
}
