#include "main.h"

/**
 * times_table - prints multiplication tables
 *
 * Return: null
 */
void times_table(void)
{
int counter1;
int counter2;
int result;
for (counter1 = 0; counter1 < 10; counter1++)
{
for (counter2 = 0; counter2 < 10; counter2++)
{
result = counter2 * counter1;
if (result < 10)
{
if (counter2 > 0)
{
_putchar(' ');
}
_putchar(result + '0');
}
else
{
_putchar((result / 10) + '0');
_putchar ((result % 10) + '0');
}
if (counter2 != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
return;
}
