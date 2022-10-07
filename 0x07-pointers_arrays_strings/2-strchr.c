#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to input string
 * @c: character to locate
 *
 * Returns: pointer to first occurrence of input character;
 * NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
return (_strchr((s + 1), c));
}
return (NULL);
}
