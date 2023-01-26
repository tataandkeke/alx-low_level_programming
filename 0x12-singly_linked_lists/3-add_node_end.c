#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add new node
 * @head: list variable
 * @str: string to duplicate
 * Return: return 1 or 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->str = strdup(str);
	(*head)->next = new_node;


	return (new_node);
}
