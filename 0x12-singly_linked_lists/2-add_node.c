#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add new node
 * @head: list variable
 * @str: string to duplicate
 * Return: return 1 or 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;

	for (i = 0; str[i] != '\0')
		;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
