#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the minimum.
 * @max: the maximum.
 *
 * Return: A pointer to the newly created array.
 * if min > max , return NULL.
 * if memory malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (int i = 0; i <= max; i++, min++)
		ar[i] = min + i;

	return (ar);
}
