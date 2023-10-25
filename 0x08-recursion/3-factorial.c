#include "main.h"
#include <stdio.h>
/**
* factorial - Calculate the factorial of a number.
* @n: The number for which to calculate the factorial.
*
* Return: The factorial of n. 
* If n is negative, return -1 to indicate an error.
* Factorial of 0 is 1.
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
