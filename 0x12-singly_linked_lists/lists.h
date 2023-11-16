#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Structure for a singly linked list node */
struct list_s {
    char *str;
    unsigned int len;
    struct list_s *next;
};

typedef struct list_s list_t;

/* Function prototype to print all elements of a linked list */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

/* Function prototype for _putchar (assuming it's used in your code) */
int _putchar(char c);

#endif /* LISTS_H */

