#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a listint_t
 * @head: The head/first node of the list
 * @n: The element of the node to be added
 * Return: The address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *lastnode;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

lastnode = *head;
while (lastnode->next != NULL)
lastnode = lastnode->next;

lastnode->next = new_node;

return (new_node);
}
