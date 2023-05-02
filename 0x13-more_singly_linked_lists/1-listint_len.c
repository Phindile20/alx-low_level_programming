#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function that returns the number of elements in
 * a linked listint_t list
 *
 * @h: singly linked list
 *
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t lists;

	lists = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		h = h->next;
		lists++;
	}
	return (lists);

}
