#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocates memory for an array using malloc
* @nmemb: number of elements
* @size: size of each element
*
* Return: pointer to the allocated memory (or NULL on failure)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *filler;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
filler = ptr;
for (i = 0; i < (nmemb * size); i++)
filler[i] = 0;
return (ptr);
}
