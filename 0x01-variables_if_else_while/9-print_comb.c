#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints all possible combinations of single-digit numbers.
* Numbers are separated by a comma and a space, printed in ascending order.
* Uses the putchar function.
*
* Return: Always 0 (Success)
*/
int main(void)
{
for (int i = '0'; i <= '9'; i++)
{
for (int j = '0'; j <= '9'; j++)
{
putchar(i);
putchar(',');
putchar(' ');
putchar(j);
putchar(' ');
}
}
return (0);
}
