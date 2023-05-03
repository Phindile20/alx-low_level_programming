#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - a function that prints all the elements of a listint_t list
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t list;

	list = 0;

	while (!h)
	{
		return (0); /*return to 0*/
	}

	if (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		list++;
	}
	return (list); /*Return the number of nudes*/
}
