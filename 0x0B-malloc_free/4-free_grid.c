#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D-array memeory chunk
 * @grid: pointer to first element
 * @height: number of rows
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
int counter;
for (counter = 0; counter < height; counter++)
{
free(grid[counter]);
}
free(grid);
return;
}
