#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list
 *
 * @head: head of asingly linked list
 *
 * @index: where index is the index of the node, starting at 0
 *
 * Return: returns the nth node of a listint_t linked list
 * If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
	{
		head = head->next;
	}

	return (head);
}
