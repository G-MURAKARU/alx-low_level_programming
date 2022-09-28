#include "main.h"

/**
 * check_sqrt - checks for square root
 * @m: number to root
 * @x: counter
 *
 * Return: square root of number
 */
int check_sqrt(int m, int x)
{
if ((x * x) == m)
{
return (x);
}
if ((x * x) > m)
{
return (-1);
}
return (check_sqrt(m, x + 1));
}

/**
 * _sqrt_recursion - finds the sqrt of an integer
 * @n: input integer to be rooted
 *
 * Return: sqrt, -1 if errors
 */
int _sqrt_recursion(int n)
{
int x = 1;
if (n < 0)
{
return (-1);
}
return (check_sqrt(n, x));
}
