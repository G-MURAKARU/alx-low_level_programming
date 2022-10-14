#include "function_pointers.h"

/**
 * array_iterator - executes a function on array elements
 * @array: integer array
 * @size: size of the array
 * @action: pointer to input function
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int counter;
if (array == NULL || size == 0)
{
return;
}
for (counter = 0; counter < size; counter++)
{
action(*(array + counter));
}
return;
}
