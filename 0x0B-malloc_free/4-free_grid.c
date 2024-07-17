#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid previously created
* @grid: the address of the 2D grid to free
* @height: the height of the grid
*
* Description: Each element of the grid is dynamically allocated
* space that needs to be freed.
*/
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
