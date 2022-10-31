#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts an input binary number to decimal
 * @b: pointer to a string of 0's and 1's
 *
 * Return: converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int counter = 0;
	int string_length;
	unsigned int decimal = 0;
	int power = 1;
	int some_number;

	if (!b)
		return (0);

	while (*(b + counter))
	{
		if ((*(b + counter) != '0') && (*(b + counter) != '1'))
			return (0);
		counter++;
	}

	string_length = --counter;
	while (counter >= 0)
	{
		power = 1;
		some_number = string_length - counter;
		if (some_number > 0)
		{
			while (some_number)
			{
				power *= 2;
				some_number--;
			}
		}
		decimal += (b[counter] - '0') * power;
		counter--;
	}
	return (decimal);
}

