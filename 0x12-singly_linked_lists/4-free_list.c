#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: head of the list.
 */

void free_list(list_t *head)
{
	list_t *tofree;

	while (head)
	{
		tofree = head;
		head = head->next;
		free(tofree->str);
		free(tofree);
	}
}
