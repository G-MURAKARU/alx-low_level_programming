#include "main.h"

/**
 * _print_rev_recursion - prints a strting in reverse
 * @s: input string to be reverse printed
 *
 * Return: null
 */
void _print_rev_recursion(char *s)
{
  int checker = 0;
  int counter = 0;
  while (*s != '\0')
    {
      *s = *s + 1;
      checker++;
    }
  while (counter <= checker)
    {
      _putchar(*(s - counter));
      counter++;
    }
  return;
}
