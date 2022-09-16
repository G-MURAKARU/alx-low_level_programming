#include "main.h"

/**
 * _isdigit - checks whether an input is a digit or not
 * @c: the input to be checked
 *
 * Return: 1 if true, 0 if false
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
