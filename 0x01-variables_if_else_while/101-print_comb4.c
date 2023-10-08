#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints all possible different combinations of three digits.
* Numbers are separated by a comma and a space, printed in ascending order.
* The three digits must be different, and various permutations are
* considered the same combination.
* Uses the putchar function a maximum of six times.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j, k;
for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar((k % 10) + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
