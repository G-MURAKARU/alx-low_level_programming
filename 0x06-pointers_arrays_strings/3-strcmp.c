#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: no idea
 */
int _strcmp(char *s1, char *s2)
{
int counter = 0;
while ((*(s1 + counter) != '\0') && (*(s2 + counter) != '\0'))
{
if (*(s1 + counter) != *(s2 + counter))
{
if (*(s1 + counter) > *(s2 + counter))
{
return (15);
}
else if (*(s1 + counter) < *(s2 + counter))
{
return (-15);
}
}
counter++;
}
return (0);
}
