#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	 size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}

	return (elem);
}
