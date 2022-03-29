#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: head of the list.
 */

void free_list(list_t *head)
{
	list_t *tofree = 0;

	while (head)
	{
		free(head->str);
		free(head);
		head = tofree;
	}
}
