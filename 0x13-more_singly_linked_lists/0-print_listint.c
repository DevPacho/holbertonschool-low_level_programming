#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to list_t elements.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
