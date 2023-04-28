#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - a function that returns the number of elements in
 * a linked list_t list
 *
 * @h: singly linked
 *
 * Return: returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	if (h != NULL)
	{
		element++;
		h = h->next;
	}
	return (element);
}
