#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: A pointer to a pointer to the head of the list.
*
* Return: The data (n) from the deleted head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (*head == NULL)
return 0; /*If the list is empty, return 0*/

temp = *head; /*Store the current head node*/
data = temp->n; /*Get the data (n) from the head node*/
*head = temp->next; /*Update the head pointer to the next node*/
free(temp); /* Free the old head node*/

return (data); /*Return the data from the deleted head node*/
}
