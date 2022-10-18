#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all input parameters
 * @n: number of input parameters
 *
 * Return: sum of inputs
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list input_integers;
	int input_sum = 0;
	unsigned int counter;

	if (n == 0)
		return (0);
	va_start(input_integers, n);
	for (counter = 0; counter < n; counter++)
	{
		input_sum += va_arg(input_integers, int);
	}
	va_end(input_integers);
	return (input_sum);
}
