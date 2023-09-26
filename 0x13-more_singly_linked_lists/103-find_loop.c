#include "lists.h"  /* Include the header file where listint_t is defined */

/**
* find_listint_loop - Finds the loop in a listint_t linked list.
* @head: A pointer to the head of the list.
*
* Return: The address of the node where the loop starts.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow_ptr, *fast_ptr;

if (head == NULL || head->next == NULL)
return (NULL); /* No loop if there are less than two nodes */

slow_ptr = head->next; /* Move one step initially */
fast_ptr = head->next->next; /* Move two steps initially */

/* Detect a loop */
while (slow_ptr != fast_ptr)
{
if (fast_ptr == NULL || fast_ptr->next == NULL)
return (NULL); /* No loop found */

slow_ptr = slow_ptr->next; /* Move one step */
fast_ptr = fast_ptr->next->next; /* Move two steps */
}

/* Move slow_ptr to the head and advance both pointers */
slow_ptr = head;
while (slow_ptr != fast_ptr)
{
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next;
}

return (slow_ptr); /* Return the address of the node where the loop starts */
}
