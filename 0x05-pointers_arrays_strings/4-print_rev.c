#include "main.h"

/**
 * print_rev - prints a string
 * @s: input string to be printed
 *
 * Return: null
 */
void print_rev(char *s)
{
int checker = 0;
while (*(s + checker) != '\0')
{
checker++;
}
while (checker--)
{
_putchar(*(s + checker));
}
_putchar('\n');
return;
}
