#include "lists.h"

/**
* insert_dnodeint_at_index - function that inserts a new node at a given
* position of a doubly linked list.
* @h: head of the list.
* @idx: index of the list where the new node should be added,
* index starts at 0.
* @n: number to add.
* Return: the address of the new node, or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a = 1;
	dlistint_t *newnode_at_index = NULL, *traverse_list = NULL;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	traverse_list = *h;

	while (traverse_list)
	{
		if (a == idx)
		{
			newnode_at_index = add_dnodeint(&traverse_list->next, n);
			newnode_at_index->prev = traverse_list;
			return (newnode_at_index);
		}
		traverse_list = traverse_list->next;
		a++;
	}

	return (NULL);
}
