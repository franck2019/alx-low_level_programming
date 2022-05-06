#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _getsize - function which gives the size of a linked list of listint
 * @head: pointer of pointer to linked list
 *
 * Return: length of the listint
 */
int _getsize(listint_t *head)
{
	int length = 0;
	listint_t *h;

	h = head;
	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}


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
	listint_t *current, *left, *right, *temp;
	unsigned int length, counter;

	if (*head == NULL)
		return (NULL);
	length = _getsize(*head);

	if (idx > (length - 1))
		return (NULL);
	current = malloc(sizeof(listint_t));

	if (current == NULL)
		return (NULL);
	current->n = n;
	counter = 0;
	temp = *head;
	if (idx > 0)
	{
		while (temp != NULL && counter < idx)
		{
			left = temp;
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
			right = temp;
			counter++;
		}
		current->next = right;
		left->next = current;
	}
	else
	{
		current->next = *head;
		*head = current;
	}
	return (current);
}
