#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to list_t elements.
 * Return: the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	for (; h != NULL; a++)
		h = h->next;
	return (a);
}
