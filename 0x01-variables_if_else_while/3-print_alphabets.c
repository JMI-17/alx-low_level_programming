#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* This function prints the alphabet in lowercase, followed by uppercase,
* and then a newline character.
*
* Return: Always 0 (success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
