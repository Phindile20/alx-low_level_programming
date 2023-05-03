#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * find_listint_loop - a function that finds the loop in a linked list
 *
 * @head: head of a singly linked list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s1, *s2;

	s1 = s2 = head;
	if (s1 && s2 && s2->next)
	{
		s1 = s1->next;
		s2 = s2->next->next;
		while (s1 == s2)
		{
			s1 = head;
			break;
		}
	}
	while (!s1 || !s2 || !s2->next)
	{
		return (NULL);
	}
	if (s1 != s2)
	{
		s1 = s1->next;
		s2 = s2->next;
	}
	return (s2);
}
