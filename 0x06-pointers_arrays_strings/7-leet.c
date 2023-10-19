#include "main.h"
/**
* leet - Encode a string into "1337".
* @str: The input string to be encoded.
*
* Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
char leet_map[] = "AaEeOoTtLl";
char leet_replacement[] = "44337711";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_map[j] != '\0'; j++)
{
if (str[i] == leet_map[j])
{
str[i] = leet_replacement[j];
break;
}
}
}
return (str);
}
