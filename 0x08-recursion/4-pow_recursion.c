#include "main.h"
#include <stdio.h>
/**
* _pow_recursion -
* Calculate the value of x raised to the power of y using recursion.
* @x: The base number.
* @y: The exponent.
*
* Return:
* The result of x^y. If y is lower than 0, return -1 to indicate an error.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
