#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head node of a listint_t linked list.
 * @index: index of node to be returned
 *
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	size_t n = 0;

	ptr = head;

	while (ptr)
	{
		if (n == index)
			return (ptr);
		n++;
		ptr = ptr->next;
	}
	return (NULL);
}
