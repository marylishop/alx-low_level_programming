#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head/first node of the list
 */
void free_listint(listint_t *head)
{
listint_t *node;

while (head != NULL)
{
node = head;
head = head->next;
free(node);
}
}
