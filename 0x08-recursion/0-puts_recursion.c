#include "main.h"

/**
 * _puts_recursion - prints a string to the console
 * @s: input string to print
 *
 * Return: null
 */
void _puts_recursion(char *s)
{
if (!*s)
{
_putchar('\n');    
return;    
}
_putchar(*s);
_puts_recursion(s + 1);
}
