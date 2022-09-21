#include "main.h"

/**
 * _strcpy - copies a string
 * @src: input string
 * @dest: copy destination
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int checker = 0;
while (*(src + checker) != '\0')
{
*(dest + checker) = *(src + checker);
checker++;
}
*(dest + (checker + 1)) = '\0';
return (dest);
}
