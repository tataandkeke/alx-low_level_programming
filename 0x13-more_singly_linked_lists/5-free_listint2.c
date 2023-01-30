#include "lists.h"

/**
 * free_listint2 - free another list
 * @head: head of linked list
 * Return: number of nodes
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
