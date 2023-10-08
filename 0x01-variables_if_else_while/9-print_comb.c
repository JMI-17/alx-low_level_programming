#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints all possible combinations of single-digit numbers.
* Numbers are separated by a comma and a space, printed in ascending order.
* Uses the putchar function a maximum of four times.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
putchar(i);
if (i != '9' || j != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n'); // To end the line
return (0);
}
