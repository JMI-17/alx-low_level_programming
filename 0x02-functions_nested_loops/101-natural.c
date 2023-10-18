#include <stdio.h>
/**
* main -
* Entry point for computing the sum of multiples of 3 or 5 below 1024
* Description:
* This program calculates and prints the sum of all the multiples of
* 3 or 5
* The sum of multiples is then displayed.
*
* Return: Always 0 (success)
*/
int main()
{
int sum = 0;
int limit = 1024;
for (i = 0; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);
return (0);
}
