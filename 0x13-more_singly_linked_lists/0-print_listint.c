#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: head node of listint_t
 *
 * Return: num of nodes (size_t)
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int i = 0;

	for (; ptr; i++, ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
	}

	return (i);
}
