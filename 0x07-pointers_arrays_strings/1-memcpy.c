#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory chunk
 * @src: source memory chunk to copy
 * @n: number of bytes to copy from src
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int counter;
for (counter = 0; counter < n; counter++)
{
*(dest + counter) = *(src + counter);
}
return (dest);
}
