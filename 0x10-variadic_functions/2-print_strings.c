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

	if (n == 0)
		return;
	va_start(input_strings, n);
	for (counter = 0; counter < (n - 1); counter++)
	{
		if (va_arg(input_strings, char *) != NULL)
			printf("%s", va_arg(input_strings, char *));
		else
			printf("(nil)");
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%s", va_arg(input_strings, char *));
	va_end(input_strings);
}
