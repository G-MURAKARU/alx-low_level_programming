#include "main.h"

/**
 * swap_int - swaps values of 2 integers
 * @a: an integer
 * @b: another integer
 *
 * Return: null
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
return;
}
