#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - a function that reverses a listint_t linked list
 *
 * @head: head of singly linked list
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *b;

	a = NULL;
	b = NULL;

	if (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		b = *head;
		*head = a;
	}

	*head = a;
	return (*head);
}
