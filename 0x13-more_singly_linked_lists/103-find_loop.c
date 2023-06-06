#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pr2;
	listint_t *prev;

	p2 = head;
	prev = head;
	while (head && pr2 && pr2->next)
	{
		head = head->next;
		pr2 = pr2->next->next;

		if (head == pr2)
		{
			head = prev;
			prev =  pr2;
			while (1)
			{
				pr2 = prev;
				while (pr2->next != head && pr2->next != prev)
				{
					pr2 = pr2->next;
				}
				if (pr2->next == head)
					break;

				head = head->next;
			}
			return (pr2->next);
		}
	}

	return (NULL);
}
