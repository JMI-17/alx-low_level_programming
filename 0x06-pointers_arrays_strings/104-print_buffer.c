#include <stdio.h>
#include "main.h"
/**
* print_buffer - Prints the content of a buffer.
* @b: A pointer to the buffer.
* @size: The number of bytes to print.
*/
void print_buffer(char *b, int size)
{
int i, j;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", b[i + j]);
else
printf("  ");
if (j % 2 == 1)
printf(" ");
if (j == 9)
{
printf(" ");
for (j = i; j < i + 10; j++)
{
if (j < size)
{
if (b[j] >= 32 && b[j] <= 126)
putchar(b[j]);
else
putchar('.');
}
}
}
}
printf("\n");
}
}
