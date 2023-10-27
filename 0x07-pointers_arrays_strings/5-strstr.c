#include "main.h"
#include <stdio.h>
/**
* _strstr - Locates a substring within a string.
* @haystack: The string to search in.
* @needle: The substring to find.
*
* Return: A pointer to the beginning of the located substring, or NULL if not found.
*/
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*n && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
