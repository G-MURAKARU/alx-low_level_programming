#include "main.h"

/**
 * flip_bits - finds number of bits to flip to go from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int placeholder;
	unsigned int flipped_bits = 0;
	int counter;

	result = (n ^ m);

	for (counter = 63; counter >= 0; counter--)
	{
		placeholder = result >> counter;
		if (placeholder & 1)
			flipped_bits += 1;
	}
	return (flipped_bits);
}

