#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: lower limit of closed interval
 * @max: upper limit of closed interval
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
int *array_pointer;
unsigned int counter = 0;
if (min > max)
{
return (NULL);
}
array_pointer = malloc(sizeof(int) * ((max - min) + 1));
if (array_pointer == NULL)
{
return (NULL);
}
while (min <= max)
{
array_pointer[counter] = min;
counter++;
min++;
}
return (array_pointer);
}
