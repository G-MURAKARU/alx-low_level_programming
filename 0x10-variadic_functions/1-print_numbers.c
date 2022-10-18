#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string that separates numbers when printed
 * @n: number of input integers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list input_integers;
	unsigned int counter;

	if (n != 0)
	{
		va_start(input_integers, n);
		for (counter = 0; counter < (n - 1); counter++)
		{
			printf("%d", va_arg(input_integers, int));
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%d", va_arg(input_integers, int));
		putchar('\n');
	}
	va_end(input_integers);
}
