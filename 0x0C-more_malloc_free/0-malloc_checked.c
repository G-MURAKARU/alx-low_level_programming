#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to assign
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
void *memory_chunk = malloc(b);
if (memory_chunk == NULL)
{
exit(98);
}
return (memory_chunk);
}
