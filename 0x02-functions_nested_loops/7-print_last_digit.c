#include "main.h"

/**
 * print_last_digit - prints the last digit of an input integer
 * @n: input integer
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
last_digit = (n * -1) % 10;
}
else
{
last_digit = n % 10;
}
_putchar(last_digit + '0');
return (last_digit);
}
