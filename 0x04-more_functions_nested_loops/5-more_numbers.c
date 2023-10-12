#include "main.h"
/**
 * print_numbers_10 - Print numbers from 0 to 14, each repeated 10 times
 */
void print_numbers_10(void)
{
char digit;
int i;
for (i = 0; i < 10; i++) // Print each number 10 times
{
digit = '0';
while (digit <= '9')
{
_putchar(digit);
digit++;
}
for (digit = '0'; digit <= '4'; digit++)
{
_putchar(digit);
}
}
_putchar('\n');
}
