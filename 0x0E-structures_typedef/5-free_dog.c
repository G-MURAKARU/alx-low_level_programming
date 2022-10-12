#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory taken up by dog object
 * @d: dog object/struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d);
}
return;
}
