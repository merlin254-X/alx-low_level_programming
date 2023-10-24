#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a
 * given index in a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted (starting at 0).
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	previous = NULL;

	while (i < index && current != NULL)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (i < index || current == NULL)
	{
		return (-1);
	}

	previous->next = current->next;
	free(current);

	return (1);
}
