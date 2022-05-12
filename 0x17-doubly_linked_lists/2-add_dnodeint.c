#include "lists.h"

/**
* add_dnodeint - function that adds a new node at the beginning of a doubly
* linked list.
* @head: head of the list.
* @n: integer data.
* Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	/* Allocate new head node. */
	new_head = malloc(sizeof(dlistint_t));

	/* Validate if the allocation was successful. */
	if (!new_head)
	{
		free(new_head);
		return (NULL);
	}

	/* To the new head is passed the data to be added. */
	new_head->n = n;
	/* Next to the new head will be the old head. */
	new_head->next = *head;
	/**
	* The previous to the new head will be nothing
	* as this now remains as the main head.
	*/
	new_head->prev = NULL;

	/**
	* If the list already has a datum, we need to bind that datum to the
	* new head.
	*/
	if (*head != NULL)
		/* The node before the old head, will now be the new node (new head). */
		(*head)->prev = new_head;
	*head = new_head;

	return (new_head);
}
