#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head node of a listint_t list
 * @n: number
 *
 * Return: address of the new element (listint_t)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
		*head = new_node;
	else
	{
		ptr = *head;

		while (1)
		{
			if (!ptr->next)
			{
				ptr->next = new_node;
				break;
			}
			ptr = ptr->next;
		}
	}

	return (new_node);
}
