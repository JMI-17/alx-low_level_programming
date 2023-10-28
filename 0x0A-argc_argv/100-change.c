#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}
int cents = 0;
char *arg = argv[1];
int i = 0;
if (arg[0] == '-')
{
_putchar('0');
_putchar('\n');
return (0);
}
while (arg[i] != '\0')
{
if (arg[i] >= '0' && arg[i] <= '9')
{
cents = cents * 10 + (arg[i] - '0');
}
else
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}
i++;
}
int coins[] = {25, 10, 5, 2, 1};
int num_coins = sizeof(coins) / sizeof(coins[0]);
int count = 0;
i = 0;
while (cents > 0 && i < num_coins)
{
if (cents >= coins[i])
{
int num = cents / coins[i];
count += num;
cents -= num * coins[i];
}
i++;
}
if (cents == 0)
{
char c;
while (count > 0)
{
c = (count % 10) + '0';
_putchar(c);
count /= 10;
}
_putchar('\n');
}
return (0);
}
