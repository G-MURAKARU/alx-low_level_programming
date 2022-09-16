#include "main.h"

/**
 * print_line - prints a horizontal line
 * @n: length of the line
 *
 * Return: null
 */
void print_line(int n)
{
int counter;
for (counter = 0; counter < n; counter++)
{
_putchar('_');
}
_putchar('\n');
return;
}
