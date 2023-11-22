#include "lists.h"
#include <stdlib.h>
/** Reverses a listint_t linked list in-place.
*
* @param head: Pointer to the head of the linked list.
* @return: A pointer to the first node of the reversed list.
*
* This function reverses the list in-place without using any additional memory allocation.
* It iterates over the list, reversing the links between the nodes, and updating the head pointer
* to point to the new first node. It only uses two variables, `prev` and `curr`, and does not
* require any additional memory allocation.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *curr = *head;
while (curr != NULL)
{
listint_t *next = curr->next;

curr->next = prev;

prev = curr;
curr = next;
}
*head = prev;
return (prev);
}
