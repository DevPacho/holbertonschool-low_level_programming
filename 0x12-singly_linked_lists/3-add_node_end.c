#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head of the list.
 * @str: the elements.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	int a = 0;
	list_t *newnode2 = *head;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (; str[a]; a++)
		;

	newnode->str = strdup(str);
	newnode->len = a;
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
