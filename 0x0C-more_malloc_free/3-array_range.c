#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers within a specified range.
 * @min: the minimum value of the range.
 * @max: the maximum value of the range.
 *
 * Return: A pointer to the newly created array.
 * if min > max , return NULL.
 *
 * if memory malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (int i = 0; i <= max; i++, min++)
		arr[i] = min + i;

	return (arr);
}
