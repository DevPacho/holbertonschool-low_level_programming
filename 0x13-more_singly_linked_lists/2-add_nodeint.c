#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 * @head: head of the list.
 * @n: integers.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{	
	listint_t *newnode;
	int a = 0;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (; a < n; a++)
		;

	newnode->n = a;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
