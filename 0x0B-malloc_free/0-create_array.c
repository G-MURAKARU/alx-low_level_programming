#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a char array of given size
 * @size: length/size of the array
 * @c: initialisation character
 *
 * Return: pointer to a char array
 */
char *create_array(unsigned int size, char c)
{
unsigned int counter;
char *char_pointer;
char_pointer = malloc(sizeof(char) * size);
if (char_pointer == NULL || char_pointer == 0)
{
return (NULL);
}
for (counter = 0; counter < size; counter++)
{
char_pointer[counter] = c;
}
return (char_pointer);
}
