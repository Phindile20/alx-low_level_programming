#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - a function that prints all the elements of a list_t list
 *
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t elements;

	elements = 0;

	if (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)\n");
		}
		else
		{
			printf("[%s] %d\n", h->str, h->len);
		}
		++elements;
		h = h->next;
	}
	return (elements);
}
