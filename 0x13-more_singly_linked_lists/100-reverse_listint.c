#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: head of the list.
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *toreverse = NULL, *toreverse2 = NULL;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			toreverse = (*head)->next;
			(*head)->next = toreverse2;
			toreverse2 = (*head);
			(*head) = toreverse;
		}
		(*head) = toreverse2;
	}
	return (toreverse2);
}
