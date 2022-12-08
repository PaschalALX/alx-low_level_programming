#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at nth index
 *
 * @head: Head of node
 *
 * @index: index
 *
 * Return: 1 succeed, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *curr, *prev;
	unsigned int i = 0;

	ptr = *head;

	if (!head)
		return (-1);

	if (*head && !(*head)->next)
	{
		*head = NULL;
		free(*head);
		return (1);
	}

	while (ptr)
	{
		if (i == index)
		{
			curr = ptr->next;
			prev = ptr->prev;
			free(ptr);
			if (!prev)
				*head = curr;
			else
				prev->next = curr;

			if (curr->prev)
				curr->prev = prev;

			return (1);
		}
		ptr = ptr->next;
		i++;
	}

	return (-1);
}
