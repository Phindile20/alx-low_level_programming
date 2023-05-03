#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _ra - memory relocation
 *
 * @list: singly linked list
 *
 * @size: size singly linked list
 *
 * @new: a node that has to beadded to a new list
 *
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **list1;
	size_t a;

	a = 0;

	list1 = malloc(size * sizeof(listint_t *));
	while (list1 == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		list1[a] = list[a];
	list1[a] = new;
	free(list);
	return (list1);
}

/**
 * free_listint_safe - a function that frees a listint_t list
 *
 * @head: head of a singly linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, b;
	listint_t **list;
	listint_t *new;

	b = 0;
	list = NULL;

	if (head == NULL || *head == NULL)
	{
		return (b);
	}
	if (*head != NULL)
	{
		for (i = 0; i < b; i++)
		{
			while (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (b);
			}
		}
		b++;
		list = _ra(list, b, *head);
		new = (*head)->next;
		free(*head);
		*head = new;
	}
	free(list);
	return (b);
}
