#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returned a pointer to newly allocated spece on memory
 * with contains a copy of the string given as parameter.
 * @str: string to duplicate
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;

	/*+1 on the size pust the end of string character*/
	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)

			m[i] = str[i];
	}
	return (m);
}

