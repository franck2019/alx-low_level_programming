#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;



/* _putchar prototype */
int _putchar(char c);
/* print_list prototype */
size_t print_list(const list_t *h);
/* list_len prototype */
size_t list_len(const list_t *h);
/* add_node prototype */
list_t *add_node(list_t **head, const char *str);
/* add_node_end prototype */
list_t *add_node_end(list_t **head, const char *str);
/* free_list */
void free_list(list_t *head);
#endif /* LISTS_H */
