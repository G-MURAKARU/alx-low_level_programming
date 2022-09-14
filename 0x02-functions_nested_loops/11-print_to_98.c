#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: some integer
 *
 * Return: always 0
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n > 98)
{
n--;
}
else if (n < 98)
{
n++;
}
}
printf("%d\n", 98);
return;
}
