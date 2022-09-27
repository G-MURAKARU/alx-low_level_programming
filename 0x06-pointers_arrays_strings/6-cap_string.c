#include "main.h"

/**
 * cap_string - capitalises each word in a string
 * @str: input string
 *
 * Return: pointer to modified string
 */
char *cap_string(char *str)
{
  int checker = 0;
  int counter;
  char my_array[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};
  while (*(str + checker) != '\0')
    {
      for (counter = 0; counter < 13; counter++)
       {
	if (*(str + checker) == my_array[counter])
	  {
	   if (*(str + checker + 1) >= 97 && *(str + checker + 1) <= 122)
	     {
	      *(str + checker + 1) -= 32;
	     }
	   break;
	  }
       }
     checker++;
    }
  return (str);
}
