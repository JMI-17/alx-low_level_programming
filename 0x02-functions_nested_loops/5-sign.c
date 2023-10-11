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
int n;
n = 98;
print_sign(n);
_putchar('\n');
n = 0;
print_sign(n);
_putchar('\n');
n = -12;
print_sign(n);
_putchar('\n');
return (0);
}
