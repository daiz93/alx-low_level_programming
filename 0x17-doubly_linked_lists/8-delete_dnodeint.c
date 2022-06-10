#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *second_h = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (second_h == NULL)
			return (-1);
		second_h = second_h->next;
	}

	if (second_h == *head)
	{
		*head = second_h->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		second_h->prev->next = second_h->next;
		if (second_h->next != NULL)
			second_h->next->prev = second_h->prev;
	}

	free(second_h);
	return (1);
}
