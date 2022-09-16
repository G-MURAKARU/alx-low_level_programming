#include "main.h"

/**
 * _isupper - checks whether a character is uppercase or not
 * @c: the character to be checked
 *
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
