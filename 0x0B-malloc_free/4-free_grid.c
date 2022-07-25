#include "main.h"

/**
* free_grid - frees the 2d array
* @grid: grid to be freed
* @height: height array
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
