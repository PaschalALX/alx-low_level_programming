#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head node of a listint_t linked list
 *
 * Return: the head node’s data (n) - int
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n = 0;

	if (*head)
	{
		ptr = *head;
		n = ptr->n;
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	return (n);
}
