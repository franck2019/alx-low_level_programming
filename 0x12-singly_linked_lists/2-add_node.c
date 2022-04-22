#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: a pointer of pointer to the struct list_t
 * @str: a string to add to the structure
 *
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length;

	length = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	length = strlen(str);
	new->len = length;

	new->next = *head;
	*head = new;
	return (new);
}
