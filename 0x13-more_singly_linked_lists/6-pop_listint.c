#include "lists.h"
#include <stdio.h>
/**
*pop_listint - a function deletes the head node of a linked list

*@head: head of a singly linked list
*
*Return: returns the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
       	listint_t *list;
	int a;

	if (*head == NULL)
        {
                return (0);
        }

        list = *head;
        a = list->n;
        free(list);
        *head = (*head)->next;

        return (a);
}
