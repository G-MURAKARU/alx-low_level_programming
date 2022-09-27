#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: input string
 *
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
int checker = 0;
while (*(str + checker) != '\0')
{
if ((*(str + checker) >= 97) && (*(str + checker) <= 122))
{
*(str + checker) -= 32;
}
checker++;
}
return (str);
}
