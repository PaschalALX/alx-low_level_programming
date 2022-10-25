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
	listint_t *temp, *ptr;
	unsigned int i = 0;

	if (!(*head) || !head)
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
		if (i == index - 1)
		{
			temp = ptr->next;
			ptr->next = temp->next;
			free(temp);
			temp = NULL;
			return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1);
}
