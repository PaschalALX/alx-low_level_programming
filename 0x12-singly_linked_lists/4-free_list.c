#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of a linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *node_f;

	current = head;
	while (current)
	{
		free(current->str);
		node_f = current;
		current = current->next;
		free(node_f);
	}
}
