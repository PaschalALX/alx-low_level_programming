#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of a linked list
 * @str: string to be added
 *
 * Return: Head of list_t list (list_t*)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tail;

	if (!(*head))
	{
		*head = malloc(sizeof(list_t));
		if (!(*head))
			return (NULL);

		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
	}
	else
	{
		tail = *head;
		*head = NULL;
		*head = malloc(sizeof(list_t));

		if (!(*head))
			return (NULL);

		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = tail;
	}
	return (*head);
}
