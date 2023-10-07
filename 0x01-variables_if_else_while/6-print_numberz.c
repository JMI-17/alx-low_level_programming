#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* This function prints all single-digit numbers of base 10
* followed by a newline character using only two putchar calls.
*
* Return: Always 0 (success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar('0' + digit);
digit++;
}
putchar('\n');
return (0);
}
