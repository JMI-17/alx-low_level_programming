#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* This function prints the lowercase alphabet in reverse
* followed by a newline character using only two putchar calls.
*
* Return: Always 0 (success)
*/
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
