#include "main.h"

/**
 * get_bit - returns but value at a given index
 * @n: input decimal number
 * @index: index to investigate
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if (n & 1)
		return (1);
	else
		return (0);
}

