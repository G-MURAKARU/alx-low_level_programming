#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory chunk elsewhere
 * @ptr: pointer to first memory location
 * @old_size: size of initial memory chunk
 * @new_size: size of new memory chunk
 *
 * Return: pointer to new memory chunk
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *array_pointer;
if (new_size == old_size)
{
return (ptr);
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{
array_pointer = malloc(new_size);
if (array_pointer == NULL)
{
return (NULL);
}
free(ptr);
return (array_pointer);
}
}
