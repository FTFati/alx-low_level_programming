#include "main.h"
#include <stdlib.h>
/**
 * _free_grid - function frees a 2 dim gri
 * @grid: pointer
 * @height: number of rows in the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
