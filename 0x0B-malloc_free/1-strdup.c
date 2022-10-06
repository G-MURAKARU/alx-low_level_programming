#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string to a new memory location
 * @str: input string to copy
 *
 * Return: pointer to allocated memory
 */
char *_strdup(char *str)
{
char *char_pointer;
int counter;
int string_length = 0;
if (str == NULL)
{
str = "";
}
while (*(str + string_length) != '\0')
{
string_length++;
}
char_pointer = malloc(sizeof(char) * string_length);
for (counter = 0; counter < string_length; counter++)
{
*(char_pointer + counter) = *(str + counter);
}
return (char_pointer);
}

  
