#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: head of the list.
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *newnode = *head, *newnode2;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(newnode);
		return (1);
	}

	for (; a < index - 1; a++)
	{
		if (newnode == NULL)
			return (-1);

		newnode = newnode->next;
	}
	newnode2 = newnode->next;
	newnode->next = newnode2->next;
	free(newnode2);
	return (1);
}
