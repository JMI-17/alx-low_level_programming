#include "main.h"
/**
* print_diagonal - Draw a diagonal line of backslashes
* @n: The number of times the character '\'
* should be printed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int spaces = 0;
while (n > 0)
{
int i;
for (i = 0; i < spaces; i++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
spaces++;
n--;
}
}
}
