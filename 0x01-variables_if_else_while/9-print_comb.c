#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * Return: 0 if successful, -1 if errors
 */
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
putchar(number + '0');
if (number != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
