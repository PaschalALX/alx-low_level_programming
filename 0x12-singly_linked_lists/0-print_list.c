#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints linked list
 * @h: head of a linked list
 *
 * Return: number of nodes (size_t)
 */
size_t print_list(const list_t *h)
{
	size_t n;

	if (!h)
		return (0);

	n = 0;
	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[%u] %s\n", 0, "(nil)");
		n++;
		h = h->next;
	}
	return (n);
}
