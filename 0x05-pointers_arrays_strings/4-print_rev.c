#include <stdio.h>
/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: The string to be printed in reverse.
*/
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
while (i > 0)
{
i--;
putchar(s[i]);
}
putchar('\n');
}
int main()
{
char str[] = "Hello, World!";
print_rev(str);
return 0;
}
