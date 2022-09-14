#include "main.h"

/**
 * _islower - checks whether a character is lowercase or not
 * @c: the character to be checked
 *
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
