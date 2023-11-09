#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
* Description: function that searches for an integer.
* @int_index  - name of the fucntion.
*
* @array: The array to search in.
* @size: The size of the array.
* @cmp: A function to compare values.
*
* return - The index of the first element for which the cmp function does not return 0,
* or -1 if no element matches or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0)
{
return (-1);
}
for (int i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
