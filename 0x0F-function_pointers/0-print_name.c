#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: [string] name to print
 * @f: function to print name
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
return;
}
