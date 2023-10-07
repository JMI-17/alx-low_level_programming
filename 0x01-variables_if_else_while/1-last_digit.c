#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
*
* Description: This function generates a random number, calculates its last digit,
* and prints information about the last digit.
*
* Return: Always 0 (success)
*/
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
lastDigit = n % 10;
if (lastDigit > 5)
{
printf("and is greater than 5\n",lastDigit);
}
else if (lastDigit == 0)
{
printf("and is 0\n",lastDigit);
}
else
{
printf("and is less than 6 and not 0\n",lastDigit);
}
return (0);
}
