#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _r - memory relocated
 *
 * @list: singly linked list
 *
 * @size: size of singly linked list
 *
 * @new: node that needs to be added to a new list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **nl;
	size_t a;

	nl = malloc(size * sizeof(listint_t *));

	while (nl == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		nl[a] = list[a];
	nl[a] = new;
	free(list);
	return (nl);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list
 *
 * @head: head of a singly linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t a, s1;
	const listint_t **list = NULL;

	s1 = 0;

	if (head != NULL)
	{
		for (a = 0; a < s1; a++)
		{
			if (head == list[s1])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (s1);
			}
		}
		s1++;
		list = _r(list, s1, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (s1);
}
