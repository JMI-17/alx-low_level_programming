#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints numbers, followed by a new line.
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
*
* Return: nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ap;
va_start(ap, n);
while (i < n)
{
printf("%d", va_arg(ap, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(ap);
}
