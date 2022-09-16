#include "main.h"

/**
* print_square - prints a square
* @size: square dimensions
*
* Return: null
*/
void print_square(int size)
{
int counter1;
int counter2;
for (counter1 = 0; counter1 < size; counter1++)
{
for (counter2 = 0; counter2 < size; counter2++)
{
_putchar('#');
}
_putchar('\n');
}
return;
}
