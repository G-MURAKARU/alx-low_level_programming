#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase, followed by a new line
 *
 * Return: null
 */
void print_alphabet_x10(void)
{
char c;
int counter;
for (counter = 0; counter < 10; counter++)
{
for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}
_putchar('\n');
}
return;
}
