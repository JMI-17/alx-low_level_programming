#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - Executes a function on each element of an array.
*
* @param array The array to iterate over.
* @param size The size of the array.
* @param action The function to execute on each element of the array.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
