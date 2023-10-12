#include "main.h"
/**
* print_line - Print a line of underscores
* @n: The number of times '_' should be printed
*/
void print_line(int n)
{
if (n > 0)
{
for (int i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
