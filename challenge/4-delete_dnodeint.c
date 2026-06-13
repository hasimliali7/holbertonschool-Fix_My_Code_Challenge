#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index
 * @head: Double pointer to the head of the linked list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	saved_head = *head;
	i = 0;
	while (saved_head != NULL && i < index)
	{
		saved_head = saved_head->next;
		i++;
	}

	if (saved_head == NULL)
		return (-1);

	if (saved_head->prev != NULL)
		saved_head->prev->next = saved_head->next;
	else
		*head = saved_head->next;

	if (saved_head->next != NULL)
		saved_head->next->prev = saved_head->prev;

	free(saved_head);
	return (1);
}
