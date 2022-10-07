#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "";
    char *t;

    t = _strstr(s, f);
    printf("%c\n", 'y');
    printf("%s\n", t);
    printf("%c\n", 'z');
    return (0);
}
