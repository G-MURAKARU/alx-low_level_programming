#include "main.h"

/**
 * _puts - prints a string
 * @str: input string to be printed
 *
 * Return: null
 */
void _puts(char *str)
{
int checker = 0;
while (*(str + checker) != '\0')
{
_putchar(*(str + checker));
checker++;
}
_putchar('\n');
return;
}
