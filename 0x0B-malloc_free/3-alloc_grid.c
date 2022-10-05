#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates memory for a 2D array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to allocated array memory
 */
int **alloc_grid(int width, int height)
{
  int *one_D_pointers;
  int **two_D_pointers;
  int outer_loop = 0;
  int inner_loop = 0;
  two_D_pointers = malloc(sizeof(**two_D_pointers) * height);
  one_D_pointers = malloc(sizeof(int) * (width * height)); /* enough memory for one row */
  for (outer_loop = 0; outer_loop < height; outer_loop++)
    {
      two_D_pointers[outer_loop] = (one_D_pointers + (outer_loop * width));
      for (inner_loop = 0; inner_loop < width; inner_loop++)
	{
	  one_D_pointers[(outer_loop * width) + inner_loop] = 0;
	}
    }
  return (two_D_pointers);
}
