#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int n, abs_value;
n = -98;
abs_value = _abs(n);
if (abs_value < 0)
_putchar('-');    
print_number(abs_value);
_putchar('\n');
return (0);
}
/**
 * print_number - Print an integer using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
if (n < 0)
n = -n;
if (n / 10 != 0)
print_number(n / 10);
_putchar((n % 10) + '0');
}
