#include "main.h"

/**
 * check - checks prime number-ness
 * @m: number to check
 * @x: counter
 *
 * Return: 1 if prime, 0 if not
 */
int check(int m, int x)
{
if (m % x == 0)
{
return (0);
}
if (x >= m / 2)
{
return (1);
}
return (check(m, x + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: input integer
 *
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
int x = 2;
if (n < 2)
{
return (0);
}
if (n == 2 || n == 3)
{
return (1);
}
return (check(n, x));
}
