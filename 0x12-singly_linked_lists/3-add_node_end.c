#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: A double pointer to the head of the list.
* @str: The string to be duplicated and stored in the new node.
*
* Return: The address of the new element, or NULL if it fails.
*/
list_t *add_node_end(list_t **head, const char *str)
{
if (str == NULL)
{
return (NULL);  /* Don't add a node if the input string is NULL */
}
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);  /* Return NULL if malloc fails to allocate memory */
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);  /* Free the allocated memory if strdup fails */
return (NULL);
}
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;  /* If the list is empty, the new node becomes the head */
}
else
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;  /* Traverse to the end of the list */
}
current->next = new_node;  /* Add the new node at the end */
}
return (new_node);
}
