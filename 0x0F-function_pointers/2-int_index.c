#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array
 * @size: number of elements in input array
 * @cmp: input compare function
 *
 * Return: integer index if found, -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int comparison_result;
if (!size)
{
return (-1);
}
comparison_result = cmp(*array);
if (comparison_result != 0)
{
return (0);
}
return (1 + int_index((array + 1), (size - 1), (*cmp)));
}
