#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: input string to print
 *
 * Return: null
 */
void puts_half(char *str)
{
int checker = 0;
int counter;
while (*(str + checker) != '\0')
{
checker++;
}
if (checker % 2 != 0)
{
counter = ((checker - 1) / 2) + 1;
}
else
{
counter = (checker / 2) + 1;
}
while (counter < checker)
{
_putchar(*(str + counter));
counter++;
}
_putchar('\n');
return;
}
