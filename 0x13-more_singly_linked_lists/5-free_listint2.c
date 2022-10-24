#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head node of a listint_t list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *freed_node;

	if (head == NULL)
		return;

	ptr = *head;

	while (ptr)
	{
		freed_node = ptr;
		ptr = ptr->next;
		free(freed_node);
	}
	*head = NULL;
}
