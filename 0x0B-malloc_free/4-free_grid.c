#include "main.h"
#include <stdlib.h>
/**
 * free_grid - 2d
 * @grid:allocation
 * @height:size
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
	free(grid[i]);
	i++;
	}
	free(grid);
}
