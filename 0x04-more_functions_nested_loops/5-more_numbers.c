#include "main.h"

/**
 * more_numbers - prints 0 - 14
 *
 * Return: null
 */
void more_numbers(void)
{
int counter;
int counter1;
for (counter1 = 0; counter1 < 10; counter1++)
{
for (counter = 0; counter < 15; counter++)
{
if (counter > 9)
{
_putchar((counter / 10) + '0');
}
_putchar((counter % 10) + '0');
}
_putchar('\n');
}
return;
}
