#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node in a list
 * @head: head of linked list
 * @index: index of linked list
 * Return: 1 or 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new = NULL;
	listint_t *tmp = head;


	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);

		tmp = tmp->next;
		i++
	}

	new = tmp->next;
	tmp->next = new->next;
	free(new);

	return (1);
}
