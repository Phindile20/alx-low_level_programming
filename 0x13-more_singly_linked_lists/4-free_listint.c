#include "lists.h"
#include <stdio.h>
/**
 * free_listint - a function that frees a listint_t list
 *
 * @head: singly linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	while (!head)
	{
		return;
	}

	free_listint(head->next);
	free(head);
}
