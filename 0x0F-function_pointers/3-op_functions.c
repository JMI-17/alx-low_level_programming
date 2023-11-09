#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - adds two integers
* @a: first integer
* @b: second integer
*
* Return: value of the sum
*/
int op_add(int a, int b)
{
int sum;
sum = a + b;
return (sum);
}
/**
* op_sub - subtracts two integers
* @a: first integer
* @b: second integer
*
* Return: value of the subtraction
*/
int op_sub(int a, int b)
{
int sub;
sub = a - b;
return (sub);
}
/**
* op_mul - multiplies two integers
* @a: first integer
* @b: second integer
*
* Return: value of the multiplication
*/
int op_mul(int a, int b)
{
int mul;
mul = a * b;
return (mul);
}
/**
* op_div - divides an integer by another
* @a: first integer (the dividend)
* @b: second integer (the divisor)
*
* Return: value of the division
*/
int op_div(int a, int b)
{
int div;
div = a / b;
return (div);
}
/**
* op_mod - finds the modulus of two integers
* @a: first integer
* @b: second integer
*
* Return: value of the modulus
*/
int op_mod(int a, int b)
{
int mod;
mod = a % b;
return (mod);
}
