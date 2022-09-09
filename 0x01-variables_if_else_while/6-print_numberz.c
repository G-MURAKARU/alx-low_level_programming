#include <stdio.h>
#include <string.h>

/**
 * main - prints all singlr digit decimal integers
 *
 * Return: 0 if successful, -1 if errors
 */
int main(void)
{
int decimal;
for (decimal = 0; decimal < 10; decimal++)
{
putchar(decimal + '0');
}
putchar('\n');
return (0);
}
