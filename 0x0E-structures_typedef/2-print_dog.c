#include <stdio.h>
#include "dog.h"
/**
* print_dog - Prints information about a dog
* @d: Pointer to a struct dog
*
* Description: This function prints the name, age, and owner of a dog.
*              If the dog's name or owner is NULL, it prints "(nil)".
*
* Return: No return value (void)
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
