#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *tofree;

	while (head)
	{
		tofree = head;
		head = head->next;
		free(tofree);
	}
}
