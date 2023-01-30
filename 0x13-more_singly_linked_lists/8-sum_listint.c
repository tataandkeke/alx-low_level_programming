#include "lists.h"

/**
 * sum_listint- gets sum of all n data
 * @head: head of linked list
 * Return: pointer to node
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
