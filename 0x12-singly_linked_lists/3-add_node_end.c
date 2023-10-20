#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: This is a pointer to a pointer (**head) to the head of the list
 * @str: This is a pointer to a string (const char*)
 * that you want to store in the new node.
 * Return: Return: the address of the new element, or NULL if it f
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;

	return (new_node);
}


