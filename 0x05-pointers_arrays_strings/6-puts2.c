#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string to print
 *
 * Return: null
 */
void puts2(char *str)
{
int checker = 0;
int counter = 0;
while (*(str + checker) != '\0')
{
checker++;
}
while (counter < checker)
{
_putchar(*(str + counter));
counter = counter + 2;
}
_putchar('\n');
return;
}
