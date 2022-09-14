#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0 if successful, -1 if errors
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}
_putchar('\n');
return;
}
