#include "main.h"

/**
 * print_binary - prints binary rep. of a decimal number
 * @n: input decimal number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int count = 0, counter = 0;
	unsigned long int current;

	for (counter = 63; counter >= 0; counter--)
	{
		current = n >> counter;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}

