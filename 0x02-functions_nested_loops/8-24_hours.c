#include "main.h"

/**
 * jack_bauer - unction to print every minute of the day
 *
 * Return: always 0
 */
void jack_bauer(void)
{
int hour1;
int hour2;
int minute1;
int minute2;
int counter;
for (hour1 = 0; hour1 < 3; hour1++)
{
if (hour1 == 2)
{
counter = 4;
}
else
{
counter = 10;
}
for (hour2 = 0; hour2 < counter; hour2++)
{
for (minute1 = 0; minute1 < 6; minute1++)
{
for (minute2 = 0; minute2 < 10; minute2++)
{
_putchar(hour1 + '0');
_putchar(hour2 + '0');
_putchar(':');
_putchar(minute1 + '0');
_putchar(minute2 + '0');
_putchar('\n');
}
}
}
}
return;
}
