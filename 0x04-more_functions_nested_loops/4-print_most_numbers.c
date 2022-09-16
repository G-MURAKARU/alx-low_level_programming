#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 save 2 & 4
 *
 * Return: null
 */
void print_most_numbers(void)
{
int counter;
for (counter = 0; counter < 10; counter++)
{
if (counter == 2 || counter == 4)
{
continue;
}
_putchar(counter + '0');
}
_putchar('\n');
return;
}
