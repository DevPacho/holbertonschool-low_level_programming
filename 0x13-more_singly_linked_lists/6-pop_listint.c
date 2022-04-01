#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list.
 * @head: head of the list.
 * Return: the head node’s data (n) or return 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{

	listint_t *todelete = *head;
	int tosave = 0;

	if (!*head)
		return (0);

	tosave = todelete->n;
	*head = (*head)->next;
	free(todelete);
	return (tosave);
}
