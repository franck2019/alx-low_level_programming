#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;



/* _putchar prototype */
int _putchar(char c);
/* print_listint prototype */
size_t print_listint(const listint_t *h);
/* listint_len prototype */
size_t listint_len(const listint_t *h);
/* add_nodeint prototype */
listint_t *add_node(listint_t **head, const char *str);
/* add_nodeint_end prototype */
listint_t *add_nodeint_end(listint_t **head, const char *str);
/* free_listint */
void free_listint(listint_t *head);
/* free_listint2 prototype */
void free_listint2(listint_t **head);
/* pop_listint prototype */
int pop_listint(listint_t **head);
/* get_nodeint_at_int prototype */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* sum_listint prototype */
int sum_listint(listint_t *head);
/* insert_nodeint_at_index prototype */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* delete_nodeint_at_index prototype */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif /* LISTS_H */
