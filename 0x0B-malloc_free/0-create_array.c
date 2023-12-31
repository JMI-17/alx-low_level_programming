#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - Creates an array of characters and
* initializes it with a specific character
* @size: The size of the array
* @c: The character with which to initialize the array
*
* Return: A pointer to the allocated array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
return (NULL);
arr = (char *)malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
