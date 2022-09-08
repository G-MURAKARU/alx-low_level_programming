#include <stdio.h>
#include <string.h>

/**
 * main - prints an arbitrary string to the console using putchar
 *
 * Return: 1 if successful, -1 if errors
 */
int main(void)
{
char my_string[] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19";
int string_length = strlen(my_string);
int counter = 0;
while (counter < string_length)
{
putchar(my_string[counter]);
counter++;
}
putchar('\n');
return (1);
}
