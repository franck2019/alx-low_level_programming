#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position.
 * @head: a pointer to the struct listint_t
 * @idx: the positon of the node we want to insert
 * @n: the value of the data node
 *
 * Return:the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *left;
	listint_t *right;
	listint_t *temp;
	unsigned int length, counter;

	if (*head == NULL)
		return (NULL);

	length = 0;
	temp = *head;

	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}

	if (idx > (length - 1))
		return (NULL);

	counter = 0;
	temp = *head;
	/* left = NULL;
	right = NULL; */

	while (temp != NULL && counter < idx)
	{
		left = temp;
		temp = temp->next;
		right = temp;
		counter++;
	}

	current = malloc(sizeof(listint_t));
	current->n = n;
	current->next = right;
	left->next = current;

	return (current);
}
