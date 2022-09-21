#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: input string
 *
 * Return: length of the input string
 */
int _strlen(char *s)
{
int checker = 0;
while (*(s + checker) != '\0')
{
checker++;
}
return (checker);
}
