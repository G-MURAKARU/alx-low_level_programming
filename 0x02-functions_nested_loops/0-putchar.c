#include "main.h"
#include <string.h>

/**
 * main - prints "_putchar" to stdout
 *
 * Return: 0 if successful, -1 if errors
 */
int main(void)
{
char my_string[] = "_putchar";
int counter = 0;
int string_length = strlen(my_string);
for (counter = 0; counter < string_length; counter++)
{
_putchar(my_string[counter]);
}
_putchar('\n');
return (0);
}
