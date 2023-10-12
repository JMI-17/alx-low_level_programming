#include "main.h"
/**
* print_diagonal - Draw a diagonal line of backslashes
* @n: The number of times the character '\' should be printed
*/
void print_diagonal(int n)
{
int spaces = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
for (spaces = 0; spaces < n; spaces++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
n--;
}
}
}
