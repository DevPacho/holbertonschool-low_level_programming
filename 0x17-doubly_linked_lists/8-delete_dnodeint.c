#include "lists.h"

/**
* delete_dnodeint_at_index - function that deletes the node at index of a
* doubly linked list.
* @head: head of the list.
* @index: index of the node that should be deleted.
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *traverse_to_delete = NULL;

	if (!head || !*head)
		return (-1);

	traverse_to_delete = *head;

	for (; a < index; a++)
	{
		if (traverse_to_delete == NULL)
			return (-1);

		traverse_to_delete = traverse_to_delete->next;
	}

	if (*head == traverse_to_delete)
		*head = traverse_to_delete->next;

	if (traverse_to_delete->next != NULL)
		(traverse_to_delete->next)->prev = traverse_to_delete->prev;

	if (traverse_to_delete->prev != NULL)
		(traverse_to_delete->prev)->next = traverse_to_delete->next;

	free(traverse_to_delete);
	return (1);
}
