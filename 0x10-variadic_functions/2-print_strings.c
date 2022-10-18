#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: separates strings when printed
 * @n: number of input strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list input_strings;
	unsigned int counter;
	char *place_holder;

	if (n == 0)
		return;
	va_start(input_strings, n);
	for (counter = 0; counter < n; counter++)
	{
		place_holder = va_arg(input_strings, char *);
		if (place_holder == NULL)
			printf("(nil)");
		else
			printf("%s", place_holder);
		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(input_strings);
}
