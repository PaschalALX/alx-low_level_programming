#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head node of a listint_t linked list
 *
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2, *ptr;

	temp1 = NULL;
	ptr = *head;

	while (ptr)
	{
		temp2 = ptr->next;
		ptr->next = temp1;
		temp1 = ptr;
		ptr = temp2;
	}
	*head = temp1;
	return (*head);
}
