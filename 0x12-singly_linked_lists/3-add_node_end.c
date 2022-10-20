#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of a linked list
 * @str: string to be added
 *
 * Return: Tail of list_t list (list_t*)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *tail;

	if (!(*head))
	{
		tail = malloc(sizeof(list_t));

		if (!(tail))
			return (NULL);

		tail->str = strdup(str);
		tail->len = strlen(str);
		tail->next = NULL;
		*head = tail;
	}
	else
	{
		current = *head;
		tail = malloc(sizeof(list_t));
		if (!tail)
			return (NULL);

		tail->str = strdup(str);
		tail->len = strlen(str);
		tail->next = NULL;

		while (current)
		{
			if (current->next == NULL)
			{
				current->next = tail;
				break;
			}
			current = current->next;
		}
	}
	return (tail);
}
