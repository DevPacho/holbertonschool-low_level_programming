#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tofree;

	if (!head)
		return;

	while (*head)
	{
		tofree = *head;
		*head = (*head)->next;
		free(tofree);
	}
	head = NULL;
}
