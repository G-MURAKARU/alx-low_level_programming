#include <stdio.h>
#include <stdlib.h>

/**
 * change_maker - calculates change
 * @change: amount to find change for
 * @coins: number of coins (so far)
 *
 * Return: calculated change
 */
int change_maker(int change, int coins)
{
if (change / 25 > 0)
{
coins += (int)(change / 25);
return (change_maker((change % 25), coins));
}
else if (change / 10 > 0)
{
coins += (int)(change / 10);
return (change_maker((change % 10), coins));
}
else if (change / 5 > 0)
{
coins += (int)(change / 5);
return (change_maker((change % 5), coins));
}
else if (change / 2 > 0)
{
coins += (int)(change / 2);
return (change_maker((change % 2), coins));
}
else
{
coins += change;
return (coins);
}
}

/**
 * main - prints minimum number of change coins
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
if ((atoi(argv[1])) == 0 && (*argv[1] != '0'))
{
printf("Error\n");
return (1);
}
coins = change_maker(atoi(argv[1]), coins);
printf("%d\n", coins);
return (0);
}
