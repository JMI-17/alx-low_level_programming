#include "main.h"
/**
 * main - Entry point for testing the print_sign function
 *
 * Description: This function tests the print_sign function with
 * different numbers and prints the results.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;
r = print_sign(98);
if (r < 0)
r *= -1;
_putchar(r + '0');
_putchar('\n');
r = print_sign(0);
if (r < 0)
r *= -1;
_putchar(r + '0');
_putchar('\n');
r = print_sign(-12);
if (r < 0)
r *= -1;
_putchar(r + '0');
_putchar('\n');
return (0);
}
