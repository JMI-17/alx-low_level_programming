#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int n;
n = 402;
_putchar('n');
_putchar('=');
_putchar((n / 100) % 10 + '0'); /* Print hundreds digit */
_putchar((n / 10) % 10 + '0');  /* Print tens digit */
_putchar(n % 10 + '0');         /* Print units digit */
_putchar('\n');
reset_to_98(&n);
_putchar('n');
_putchar('=');
_putchar((n / 100) % 10 + '0');
_putchar((n / 10) % 10 + '0');
_putchar(n % 10 + '0');
_putchar('\n');
return (0);
}
