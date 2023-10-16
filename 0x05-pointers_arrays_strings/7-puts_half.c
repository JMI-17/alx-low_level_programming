#include "main.h"
#include <stdio.h>
/**
* puts_half - Prints the second half of a string.
* @str: A pointer to the input string.
*/
void puts_half(char *str)
{
int length = 0;
int i, start;
while (str[length] != '\0')
{
length++;
}
start = (length % 2 == 0) ? length / 2 : (length - 1) / 2;
for (i = start; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
