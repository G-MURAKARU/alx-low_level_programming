#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * Return: 0 if successful, -1 if errors
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; --c)
{
putchar(c);
}
putchar('\n');
return (0);
}
