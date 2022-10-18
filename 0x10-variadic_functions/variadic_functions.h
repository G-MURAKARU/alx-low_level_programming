#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print_funcs - new struct defining a printer function
 * @data_type: input data type corresponding to
 * 		standard C data symbols
 * @print_func: function pointer to function that prints
 * 		according to data_type
 *
 * Description: see above
 */
typedef struct printer_func
{
	char *data_type;
	void (*print_func)(va_list args);
} printer_func_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
