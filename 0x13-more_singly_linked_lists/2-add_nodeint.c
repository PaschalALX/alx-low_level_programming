#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head node of listint_t list
 * @n: number
 *
 * Return: added node (listint_t)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;

	if (!(*head))
		ptr->next = NULL;
	else
		ptr->next = *head;

	*head = ptr;
	return (ptr);
}
