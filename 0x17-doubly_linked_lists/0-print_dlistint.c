#include "lists.h"

/**
* print_dlistint - function that prints all the elements of a doubly
* linked list.
* @h: pointer to list elements.
* Return: the number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
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
