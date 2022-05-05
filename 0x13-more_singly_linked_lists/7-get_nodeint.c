#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint
 * linked list
 * @head: a pointer to the struct listint_t
 * @index: the positon of the node we want to get
 *
 * Return: the node of a listint_t linked list at the
 * position index starting to 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int length, counter;

	if (head == NULL)
		return (NULL);

	length = 0;
	temp = head;
	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	free(temp);

	if (index > (length - 1))
		return (NULL);

	counter = 0;
	current = head;

	while (current != NULL && counter < index)
	{
		current = current->next;
		counter++;
	}

	return (current);
}
