#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: an array of integers
 * @size: size of the array
 * @action: pointer to the function to be used
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || size < 1 || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
