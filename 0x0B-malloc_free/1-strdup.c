#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Duplicates a string and returns a pointer to the duplicated string
* @str: The string to duplicate
*
* Return: A pointer to the duplicated string, or NULL if it fails
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int len = 0;
unsigned int i;
if (str == NULL)
return (NULL);
while (str[len])
len++;
duplicate = (char *)malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; i < len; i++)
duplicate[i] = str[i];
duplicate[len] = '\0';
return (duplicate);
}
