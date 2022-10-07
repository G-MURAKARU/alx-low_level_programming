#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to input string
 * @c: character to locate
 *
 * Return: pointer to first occurrence of input character
 */
char *_strchr(char *s, char c)
{
if (s == NULL || s == "" || c = NULL || c == "")
{
return (NULL);
}
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
