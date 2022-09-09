#include <stdio.h>
#include <string.h>

/**
 * main -entry point
 *
 * Return: 0 if successful, -1 if errors
 */
int main(void)
{
int hex;
char c;
for (hex = 0; hex <= 9; hex++)
{
putchar(hex + '0');
}
for (c = 'a'; c <= 'f'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
