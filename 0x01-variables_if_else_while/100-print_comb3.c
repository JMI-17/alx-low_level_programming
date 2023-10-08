#include <stdio.h>
/**
* main - Entry point
*
* Description:
* Prints all possible different combinations of two digits.
* Numbers are separated by a comma and a space, printed in 
* ascending order.
* The two digits must be different, and 01 and 10 are considered 
* the same combination.
* Uses the putchar function a maximum of five times.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int firstDigit, secondDigit;
for (firstDigit = 0; firstDigit <= 8; firstDigit++)
{       
for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
{       
putchar((firstDigit % 10) + '0'); 
putchar((secondDigit % 10) + '0'); 
if (firstDigit != 8 || secondDigit != 9)
{       
putchar(',');
putchar(' ');
}       
}       
}
putchar('\n');
return (0);
}
