#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers within a specified range.
 * @min: the minimum value of the range.
 * @max: the maximum value of the range.
 *
 * Return: A pointer to the newly created array.
 * if min is greater than max , return NULL.
 *
 * if memory allocation fails, return NULL.
 */
int *array_range(int min, int max)
{
	if (min < max)
	{
		return (NULL);
	}
	int size = max - min + 1;
	int *arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
