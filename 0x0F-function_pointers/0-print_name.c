#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
* Prints a name to the console using the function `f`.
*
* @param name: A pointer to the name to be printed.
* @param f: A pointer to a function that prints a character.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
{
return;
}
while (*name != '\0')
{
f(name);
name++;
}
}
