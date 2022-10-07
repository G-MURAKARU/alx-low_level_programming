#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: input string
 * @accept: accepted substring from input string
 *
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
while (*s)
{
unsigned int counter = 0;
while (*(accept + counter))
{
if (*s == *(accept + counter))
{
return (1 + (_strspn((s + 1), accept)));
}
counter++;
}
return (0);
}
return (0);
}
