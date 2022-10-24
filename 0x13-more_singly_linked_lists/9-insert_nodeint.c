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
	listint_t *ptr;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	ptr = *head;

	if (!idx)
	{
		new_node->next = ptr;
		(*head) = new_node;
		return (new_node);
	}
	while (ptr)
	{
		if (i == idx)
		{
			prev->next = new_node;
			new_node->next = ptr;
			return (new_node);
		}
		i++;
		prev = ptr;
		ptr = ptr->next;
	}

	free(new_node);
	return (NULL);
}
