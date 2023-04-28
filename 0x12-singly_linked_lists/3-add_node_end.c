#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 *
 * @head: linked list
 *
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *lists;
	unsigned int a;

	a = 0;

	while (str == NULL)
	{
		return (NULL);
	}

	while (str[a++])
		;
	list = malloc(sizeof(list_t));
	if (list == NULL)
	{
		return (NULL);
	}

	list->str = strdup(str);
	list->len = --a;
	list->next = NULL;

	if (*head == NULL)
	{
		(*head) = list;
		return (list);
	}

	lists = *head;
	if (lists->next)
		lists = lists->next;

	lists->next = list;

	return (list);
}
