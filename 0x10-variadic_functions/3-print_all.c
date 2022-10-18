#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_str(va_list);
void print_all(const char * const format, ...);

/**
 * print_char - prints a character
 * @char_v: list of unnamed input arguments
 *		pointing to print data
 *
 * Return: nothing
 */
void print_char(va_list char_v)
{
	char character;

	character = va_arg(char_v, int);
	printf("%c", character);
}

/**
 * print_int - prints an integer
 * @int_v: list of unnamed input arguments
 *              pointing to print data
 *
 * Return: nothing
 */
void print_int(va_list int_v)
{
	int number;

	number = va_arg(int_v, int);
	printf("%i", number);
}

/**
 * print_float - prints a floating-point number
 * @float_v: list of unnamed input arguments
 *              pointing to print data
 *
 * Return: nothing
 */
void print_float(va_list float_v)
{
	float float_num;

	float_num = va_arg(float_v, double);
	printf("%f", float_num);
}

/**
 * print_str - prints a string
 * @str_v: list of unnamed input arguments
 *              pointing to print data
 *
 * Return: nothing
 */
void print_str(va_list str_v)
{
	char *string;

	string = va_arg(str_v, char *);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - prints anything
 * @format: variable types to be printed
 * @...: additional unnamed arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list input_symbols;
	int format_counter = 0, symbol_counter = 0;
	char *separator = "";
	printer_func_t print_options[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(input_symbols, format);

	while (format && (*(format + format_counter)))
	{
		symbol_counter = 0;
		while (symbol_counter < 4 && (*(format + format_counter) !=
					(*(print_options[symbol_counter].data_type))))
			symbol_counter++;
		if (symbol_counter < 4)
		{
			printf("%s", separator);
			print_options[symbol_counter].print_func(input_symbols);
			separator = ", ";
		}
		format_counter++;
	}
	putchar('\n');
	va_end(input_symbols);
}
