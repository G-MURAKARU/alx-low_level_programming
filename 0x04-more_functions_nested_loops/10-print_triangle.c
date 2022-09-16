#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: base length
 *
 * Return: null
 */
void print_triangle(int size)
{
if (size < 1)
{
_putchar('\n');
}
else
{
int height;
int counter1;
int counter2;
for (height = 0; height < size; height++)
{
for (counter1 = (size - (height + 1)); counter1 > 0; counter1--)
{
_putchar(' ');
}
for (counter2 = 0; counter2 < (height + 1); counter2++)
{
_putchar('#');
}
_putchar('\n');
}
}
return;
}
