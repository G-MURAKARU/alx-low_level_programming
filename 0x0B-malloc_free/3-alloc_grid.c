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
int **two_D_pointers;
int outer_loop = 0;
int inner_loop = 0;
two_D_pointers = (int**)malloc(sizeof(int*) * height);
if (two_D_pointers == NULL)
{
return (NULL);
}
 for (outer_loop = 0; outer_loop < height; outer_loop++)
   {
     two_D_pointers[outer_loop] = (int*)malloc(sizeof(int) * width);
     if (two_D_pointers[outer_loop] == NULL)
       {
	 return (NULL);
       }
     for (inner_loop = 0; inner_loop < width; inner_loop++)
       {
	 two_D_pointers[outer_loop][inner_loop] = 0;
       }
   }
return (two_D_pointers);
}
