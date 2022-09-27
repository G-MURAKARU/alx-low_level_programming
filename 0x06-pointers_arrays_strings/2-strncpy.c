#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copy destination
 * @src: string to copy
 * @n: number of characters to copy
 *
 * Return: pointer to copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
int checker = 0;
int counter = 0;
int difference;
while (*(src + checker) != '\0')
{
checker++;
}
if (n < checker)
{
while (n--)
{
*(dest + counter) = *(src + counter);
counter++;
}
}
else if (checker <= n)
{
difference = n - checker;
while (checker--)
{
*(dest + counter) = *(src + counter);
counter++;
}
while (difference--)
{
*(dest + counter) = '\0';
counter++;
}
}
return (dest);
}
