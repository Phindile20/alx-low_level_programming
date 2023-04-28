#include "lists.h"
#include <stdio.h>
/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 *
 * @head: linked list
 *
 *
 * @str: strings
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	size_t lists;

	list = malloc(sizeof(list_t));
	while (list == NULL)
	{
		return (NULL);
	}

	list->str = strdup(str);

	for (lists = 0; str[lists]; lists++)
		;

	list->len = lists;
	list->next =  *head;
	*head = list;

	return (*head);
}
