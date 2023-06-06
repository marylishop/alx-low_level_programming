#include "lists.h"
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list
 * @index: index of the node
 *
 * Return: nth node. If node does not exist, returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (i == index)
		return (current);
	else
		return (NULL);
}
