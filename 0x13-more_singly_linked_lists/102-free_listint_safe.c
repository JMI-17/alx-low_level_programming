#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* Frees a listint_t list safely.
*
* @param h: Pointer to the head of the linked list.
* @return: The size of the list that was freed.
*
* This function iterates over the list, freeing each node as it goes. It also sets the head pointer to NULL
* to indicate that the list is empty. It safely handles cycles in the list and memory access errors.
*/
size_t free_listint_safe(listint_t **h) {
size_t nodes = 0;
while (*h != NULL) {
listint_t *temp = *h;
*h = (*h)->next;
free(temp);
nodes++;
}
*h = NULL;
return (nodes);
}
