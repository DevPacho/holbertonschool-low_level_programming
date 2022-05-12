#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a doubly
 * linked list.
 * @head: head of the list.
 * @n: integer data.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail, *to_iterate_last = *head;

	new_tail = malloc(sizeof(dlistint_t));

	if (!new_tail)
	{
		free(new_tail);
		return (NULL);
	}

	new_tail->n = n;
	new_tail->next = NULL;

	if (*head == NULL)
	{
		new_tail->prev = NULL;
		*head = new_tail;
		return (new_tail);
	}

	while (to_iterate_last->next != NULL)
		to_iterate_last = to_iterate_last->next;

	to_iterate_last->next = new_tail;
	new_tail->prev = to_iterate_last;

	return (new_tail);
}