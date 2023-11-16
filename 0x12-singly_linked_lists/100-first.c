#include "lists.h"
void print_message(void)
{
char message[] = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
int i;
for (i = 0; message[i] != '\0'; i++)
{
_putchar(message[i]);
}
}
