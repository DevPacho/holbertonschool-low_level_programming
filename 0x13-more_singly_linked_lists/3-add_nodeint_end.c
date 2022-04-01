#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: head of the list.
 * @n: integers.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *newnode2 = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (newnode2->next)
		newnode2 = newnode2->next;

	newnode2->next = newnode;

	return (newnode);
}
