#include "lists.h"

/**
 * pop_listint - delets the head of a lined list
 * @head: head of linked list
 * Return: n data of head
 */

int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	num = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (num);
}
