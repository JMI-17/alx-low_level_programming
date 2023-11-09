#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
* int_index - searches for an integer
* @array: the array of integers to be searched
* @size: size of the array
* @cmp: pointer to the function to be used
*
* Return: the index of the first element for which the cmp function
*         does not return 0,
*      OR -1 if  no element matches or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
