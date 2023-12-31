#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2 dimensional grid
 * 2 dimensional array of integers
 *
 * @grid: width of array
 * @height: height of array
 *
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
