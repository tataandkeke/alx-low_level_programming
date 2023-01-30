#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node inded
 * @head: head of linked list
 * @index: index of linked list
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int count = 0;

	while (tmp && count < index)
	{
		tmp = tmp->next;
		count++;
	}

	return (tmp != NULL ? tmp : NULL);
}
