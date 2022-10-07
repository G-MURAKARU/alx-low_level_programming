#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: set of searched bytes
 *
 * Return: pointer to first occurrence of searched byte
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
unsigned int counter = 0;
while (*(accept + counter))
{
if (*s == *(accept + counter))
{
return (s);
}
counter++;
}
return (_strpbrk((s + 1), accept));
}
return (NULL);
}
