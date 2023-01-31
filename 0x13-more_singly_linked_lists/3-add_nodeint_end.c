#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end
 * @head: pointer to header pointer
 * @n: int
 * Return: number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *new_node;

	tmp = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;
	return (new_node);
}
