#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: 'length' of diagonal line
 *
 * Return: null
 */
void print_diagonal(int n)
{
if (n < 1)
{
_putchar('\n');
}
else
{
int counter1;
int counter2;
for (counter1 = 0; counter1 < n; counter1++)
{
for (counter2 = 0; counter2 < counter1; counter2++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
return;
}
