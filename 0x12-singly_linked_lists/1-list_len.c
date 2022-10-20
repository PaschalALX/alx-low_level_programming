#include <stdio.h>
#include "lists.h"

/**
 * list_len -  number of elements in a linked list_t list
 * @h: head of a linked list
 *
 * Return: number of elements in a linked list_t list (size_t)
 */
size_t list_len(const list_t *h)
{
	size_t n;

	if (!h)
		return (0);

	for (n = 0; h; h = h->next, n++)
	{}
	return (n);
}
