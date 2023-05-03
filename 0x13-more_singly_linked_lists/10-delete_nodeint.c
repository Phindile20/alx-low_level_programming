#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a listint_t linked list
 *
 * @head: head of asingly linked list
 *
 * @index: where index is the index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new_list;
	listint_t *lists;

	new_list = *head;

	while (index != 0)
	{
		for (i = 0; i < index - 1 && new_list != NULL; i++)
		{
			new_list = new_list->next;
		}
	}

	while (new_list == NULL || (new_list->next == NULL && index != 0))
	{
		return (-1);
	}

	lists = new_list->next;

	if (index != 0)
	{
		new_list->next = lists->next;
		free(lists);
	}
	else
	{
		free(new_list);
		*head = lists;
	}

	return (1);
}
