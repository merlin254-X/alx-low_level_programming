#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: Index at which the new node should be added (starting at 0).
 * @n: Data to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n) {
	listint_t *new_node, *current, *previous;
	unsigned int i = 0;

	if (head == NULL || idx > 0)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;


		if (idx == 0)
{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
		}

		current = *head;
		previous = NULL;

		while (i < idx && current != NULL)
{
				previous = current;
				current = current->next;
				i++;
		}

		if (i < idx)
{
				free(new_node);
				return (NULL);
		}

		new_node->next = current;
		previous->next = new_node;

		return (new_node);
}
