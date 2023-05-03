#include "lists.h"
#include <stdio.h>
/**
 * sum_listint -  function that returns the sum of all the data (n) of
 * a listint_t linked list
 *
 * @head: head of a simgly linked list
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int s1 = 0;

	if (head != NULL)
	{
		s1 += head->n;
		head = head->next;
	}

	return (s1);
}
