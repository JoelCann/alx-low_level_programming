#include <stdlib.h>
/**
 * free_grid - main
 * @grid: grid
 * @height: value
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a += 1)
	{
		free(grid[a]);
	}
	free(grid);
}
