#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: head of a singly linked list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *list;
	listint_t *lists;

	while (head != NULL)
	{
		lists = *head;
		if ((list = lists) != NULL)
		{
			lists = lists->next;
			free(list);
		}
		*head = NULL;
	}
}
