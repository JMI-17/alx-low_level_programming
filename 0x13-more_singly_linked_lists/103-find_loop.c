#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* Finds the loop in a listint_t linked list.
*
* @param head: Pointer to the head of the linked list.
* @return: The address of the node where the loop starts, or NULL if there is no loop.
*
* This function uses Floyd's cycle detection algorithm to identify the loop in the linked list. It employs two pointers, slow and fast, that traverse the list at different speeds. If the pointers meet at any point, it indicates the presence of a loop. The function returns the address of the node where the loop starts or NULL if no loop exists.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;
while (slow != NULL && fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
return slow;
}
}
return (NULL);
}
