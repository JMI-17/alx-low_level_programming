#include "main.h"
#include <stdio.h>
/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i;
int j;
int divisor = 1;
if (argc == 1)
{
_putchar('0');
_putchar('\n');
return (0);
}
for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
sum += _atoi(argv[i]);
}
else
{
for (j = 0; argv[i][j] != '\0'; j++)
_putchar(argv[i][j]);
_putchar('\n');
return (1);
}
}
while (sum / divisor > 9)
divisor *= 10;

while (divisor > 0)
{
_putchar((sum / divisor) + '0');
sum %= divisor;
divisor /= 10;
}
_putchar('\n');
return (0);
}
