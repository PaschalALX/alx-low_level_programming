#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head node of a listint_t linked list
 * @idx: index
 * @n: number
 *
 * Return: inserted node (listint_t)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!idx)
	{
		new_node->next = ptr;
		(*head) = new_node;
		return (new_node);
	}
	while (ptr)
	{
		if (i == idx - 1)
		{
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		i++;
		ptr = ptr->next;
	}

	return (NULL);
}
