#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: array elements count
 * @size: size of each array element [bytes]
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array_pointer;
array_pointer = malloc(nmemb * size);
if (array_pointer == NULL || size == 0)
{
return (NULL);
}
return (array_pointer);
}
