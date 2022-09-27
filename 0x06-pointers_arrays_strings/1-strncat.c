#include "main.h"

/**
 * _strncat - concatenates two strings
 * upto extended length n
 * @dest: original string
 * @src: string to concatenate
 * @n: number of characters to concatenate
 *
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int checker1 = 0;
int checker2 = 0;
while (*(dest + checker1) != '\0')
{
checker1++;
}
while ((checker2 < n) && (*(src + checker2) != '\0'))
{
*(dest + checker1 + checker2) = *(src + checker2);
checker2++;
}
return (dest);
}
