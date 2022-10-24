#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head node of a listint_t list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;
	listint_t *freed_node;

	ptr = head;

	while (ptr)
	{
		freed_node = ptr;
		ptr = ptr->next;
		free(freed_node);
	}
}
