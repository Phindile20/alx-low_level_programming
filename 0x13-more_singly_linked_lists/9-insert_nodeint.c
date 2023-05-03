#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * sum_listint - sums up all the data in a linked list
 *
 * @head: head of the list
 *
 * Return: the address of the new node, or NULL if it failed
 */
int sum_listint(listint_t *head)
{
	listint_t *c;

	size_t s1;

	c = head;
	s1 = 0;
	while (c != NULL)
	{
		s1 += c->n;
		c = c->next;
	}
	return (s1);
}
