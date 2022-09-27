#include <stdio.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: a string
 * @src: another string
 *
 * Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
int checker1 = 0;
int checker2 = 0;
while (*(dest + checker1) != '\0')
{
checker1++;
}
while (*(src + checker2) != '\0')
{
*(dest + checker1 + checker2) = *(src + checker2);
checker2++;
}
return (dest);
}
