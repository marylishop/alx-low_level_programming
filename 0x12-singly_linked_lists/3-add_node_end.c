#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
size_t n;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);

for (n = 0; str[n]; n++)
;

new->len = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (*head);
}

temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;

return (new);
}
