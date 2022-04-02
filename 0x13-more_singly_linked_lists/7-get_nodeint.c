#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: head of the list.
 * @index: index of the node.
 * Return: the nth node of a listint_t linked list
 * or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	for (; a < index && head; a++)
		head = head->next;

	return (head);
}
