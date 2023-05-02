#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint - a function that adds a new node at the beginning of
 * a listint_t list
 *
 * @head: list to print
 *
 * @n: node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_list; /*a new node must be created*/

	node_list = malloc(sizeof(listint_t));

	while (node_list == NULL)
	{
		return (NULL);
	}

	node_list->n = n;
	node_list->next = (*head); /*show old node*/
	(*head) = node_list; /*creat new node*/

	return (*head);
}
