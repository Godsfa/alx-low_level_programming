#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head: A pointer to the pointer to the head of the list.
* @n: The integer value to be added to the new node.
*
* Return: The address of the new element, or NULL if it fails.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;

new_node = malloc(sizeof(listint_t)); /*Allocate memory for the new node*/

if (new_node == NULL)
return (NULL); /*Memory allocation failed*/

new_node->n = n;   /*Assign the value n to the new node's n member*/
new_node->next = NULL; /*Set the new node's next to NULL (it's the last node)*/

if (*head == NULL)
{
*head = new_node; /*If the list is empty, make the new node the head*/
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next; /*Traverse to the last node*/
}
temp->next = new_node; /*Attach the new node to the last node*/
}

return (new_node); /* Return the address of the new element*/
}
