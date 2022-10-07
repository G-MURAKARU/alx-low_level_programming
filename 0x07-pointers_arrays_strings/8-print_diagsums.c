#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of square matrix diagonals
 * @a: pointer to matrix
 * @size: dimensions of matrix
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int counter;
for (counter = 0; counter < (size * size); counter += (size + 1))
{
sum1 += a[counter];
}
printf("%d, ", sum1);
for (counter = (size - 1); counter < ((size * size) - 1); counter += (size - 1))
{
sum2 += a[counter];
}
printf("%d\n", sum2);
return;
}
