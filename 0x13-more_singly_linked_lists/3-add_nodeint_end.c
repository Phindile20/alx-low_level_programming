#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_nodeint_end - a function that adds a new node at the end of
 * a listint_t list
 *
 * @head: head of a singly linked list
 *
 * @n: element of n
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *end;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL); /*RETURN NULL IF FUNCTION FAILED*/
	}

	node->n = n;
	node->next = NULL; /*function should remain NULL*/

	while (*head == NULL)
	{
		*head = node;
		{
			return (node);
		}
	}

	end = *head;
	if (end->next)
		end = end->next;

	end->next = node; /*new node is created*/

	return (node); /*create a new node*/
}
