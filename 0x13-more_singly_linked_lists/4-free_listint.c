#include "lists.h"

/**
 * free_listint - free a list
 * @head: head of linked list
 * Return: number of nodes
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
