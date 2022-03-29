#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of the list.
 * @str: the elements.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int a = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	for (; str[a]; a++)
		;

	newnode->str = strdup(str);
	newnode->len = a;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
