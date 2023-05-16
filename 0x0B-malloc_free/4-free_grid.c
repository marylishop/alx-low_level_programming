#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memony allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
