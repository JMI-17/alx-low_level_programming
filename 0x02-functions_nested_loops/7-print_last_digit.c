#include "main.h"
/**
* print_last_digit - Print and return the last digit of a number
* @n: The number to extract the last digit from
*
* Return: The value of the last digit
*/
int print_last_digit(int n)
{
long last_digit;
if (n < 0)
{
last_digit = -(long)n % 10;
}
else
{
last_digit = (long)n % 10;
}
_putchar(last_digit + '0');
return (int last_digit);
}
