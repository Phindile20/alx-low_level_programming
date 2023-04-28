#include "lists.h"
#include <stdio.h>
#include <stdlibs.h>
#include <string.h>
/**
 * free_list - a function that frees a list_t list
 *
 * @head: linked list
 */
void free_list(list_t *head)
{
	while (!head)
	{
		return;
	}

	free_list(head->next);
	if (head->str)
	{
		free(head->str);
	}
	free(head)
}
