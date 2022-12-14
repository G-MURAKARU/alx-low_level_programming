#include "main.h"

/**
 * _pow_recursion - finds x raised to y
 * @x: input integer
 * @y: input power
 *
 * Return: evaluated power, -1 if errors
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
