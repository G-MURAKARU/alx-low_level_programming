#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: pointer to first element
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
unsigned int counter1;
unsigned int counter2;
for (counter1 = 0; counter1 < 8; counter1++)
{
for (counter2 = 0; counter2 < 8; counter2++)
{
_putchar((a[counter1][counter2]));
}
_putchar('\n');
}
return;
}
