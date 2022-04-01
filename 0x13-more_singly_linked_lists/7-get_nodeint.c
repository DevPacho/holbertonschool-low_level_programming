#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 * @head: head of the list.
 * @index: index of the node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tonth;
	unsigned int a = 0;

	tonth = head;
	if (!index)
		return (NULL);

	for (; a < index; a++)
		tonth = tonth->next;

	return (tonth);
}
