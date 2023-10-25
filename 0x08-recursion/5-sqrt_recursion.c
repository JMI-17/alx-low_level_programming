#include "main.h"
#include <stdio.h>
/**
* calculate_sqrt - Helper function to calculate the square
* root using recursion.
* @n: The number for which to calculate the square root.
* @x: The current approximation of the square root.
* Return: The natural square root of n.
*/
int calculate_sqrt(int n, int x)
{
if (x * x == n)
{
return (x);
}
else if (x * x > n)
{
return (-1);
}
else
{
return (calculate_sqrt(n, x + 1));
}
}
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (calculate_sqrt(n, 1));
}
}
