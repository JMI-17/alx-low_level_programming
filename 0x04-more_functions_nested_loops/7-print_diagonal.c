#include "main.h"
/**
* print_diagonal - Draw a diagonal line of backslashes
* @n: The number of times the character
* '\' should be printed
*/
void print_diagonal(int n)
{
int spaces;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (; n > 0; n--)
{
for (spaces = 0; spaces < n - 1; spaces++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
