#include <unistd.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes.
 *         If str is NULL, print [0] (nil).
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	char buffer[20]; /* Adjust the size as needed */

	while (h != NULL)
	{
		/* Print the content of the current node */
		if (h->str == NULL)
			write(1, "[0] (nil)\n", 11); /* 1 is the file descriptor for stdout */
		else
		{
			int len = sprintf(buffer, "[%d] %s\n", h->len, h->str);
			write(1, buffer, len);
		}

		h = h->next;
		node_count++;
	}

	return (node_count);
}
