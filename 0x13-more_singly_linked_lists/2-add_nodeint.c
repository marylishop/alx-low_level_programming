#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: Integer to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

if (new_head == NULL)
return (NULL);

new_head->n = n;
new_head->next = *head;
*head = new_head;
return (new_head);
}
