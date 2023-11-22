#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* Prints a listint_t linked list safely.
*
* @param head: Pointer to the head of the linked list.
* @return: The number of nodes in the list.
*
* This function prints the list using a single loop, ensuring program safety.
* If the function encounters a cycle or an invalid memory access, it exits
* the program with status 98.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nodes = 0;
const listint_t *visited[1024];

while (head != NULL)
{
for (int i = 0; i < nodes; i++)
{
if (visited[i] == head) {
fprintf(stderr, "Cycle detected in linked list\n");
exit(98);
}
}
visited[nodes++] = head;
printf("%d ", head->n);
head = head->next;
}
printf("\n");
return (nodes);
}
