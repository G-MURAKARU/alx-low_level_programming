#include "main.h"

/**
 * leet - 1337 encoder
 * @str: input string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
int checker = 0;
int counter;
char char_array[5] = {'a', 'e', 'o', 't', 'l'};
char int_array[5] = {'4', '3', '0', '7', '1'};
while (*(str + checker) != '\0')
{
for (counter = 0; counter < 5; counter++)
{
if ((*(str + checker) == char_array[counter]) ||
(*(str + checker) == char_array[counter] - 32))
{
*(str + checker) = int_array[counter];
break;
}
}
checker++;
}
return (str);
}
