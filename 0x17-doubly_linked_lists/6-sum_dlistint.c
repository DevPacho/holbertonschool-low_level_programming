#include "lists.h"

/**
* sum_dlistint - function that returns the sum of all the data (n) of a
* doubly linked list.
* @head: head of the list.
* Return: the sum of all the data or return 0 if the list is empty.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *traverse_list = head;

	if (!head)
		return (0);

	while (traverse_list)
	{
		sum += traverse_list->n;
		traverse_list = traverse_list->next;
	}

	return (sum);
}
