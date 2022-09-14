#include "main.h"

/**
 * _isalpha - checks whether a character is alphabetical or not
 *@c: character (ASCII value) to be checked
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
