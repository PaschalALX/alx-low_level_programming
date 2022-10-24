#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: head node of listint_t list
 *
 * Return: sizeof listint_t list (size_t)
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int i = 0;

	for (; ptr; i++, ptr = ptr->next)
	{}

	return (i);
}
