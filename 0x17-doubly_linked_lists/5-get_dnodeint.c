#include "lists.h"

/**
* get_dnodeint_at_index - function that returns the nth node of a doubly
* linked list.
* @head: head of the list.
* @index: index of the node, starting from 0.
* Return: the nth node or if the node does not exist, return NULL.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	for (; a < index && head; a++)
		head = head->next;

	return (head);
}
