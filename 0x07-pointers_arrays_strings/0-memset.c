#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory chunk
 * @b: byte to fill
 * @n: number of b's
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int counter;
for (counter = 0; counter < n; counter++)
{
*(s + counter) = b;
}
return (s);
}
