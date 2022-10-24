#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at idx of a listint_t linked list
 * @head: head node a listint_t linked list
 * @index: node's index to delete
 *
 * Return: 1(success) or -1(failure) - int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node;
	listint_t *ptr;
	listint_t *prev;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}

	while (ptr)
	{
		if (i == index)
		{
			curr_node = ptr->next;
			prev->next = curr_node;
			free(ptr);
			ptr = NULL;
			return (1);
		}
		i++;
		prev = ptr;
		ptr = ptr->next;
	}
	return (1);
}
