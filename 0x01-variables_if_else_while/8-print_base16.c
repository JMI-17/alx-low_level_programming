#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* This function prints all numbers of base 16 in lowercase
* followed by a newline character using only three putchar calls.
*
* Return: Always 0 (success)
*/
int main(void)
{
int digit = 0;
while (digit < 10)
{
putchar('0' + digit);
digit++;
}
char letter = 'a';
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
