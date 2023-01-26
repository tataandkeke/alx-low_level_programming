#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all element of list
 * @h: list variable
 * Return: return 1 or 0
 */

size_t list_len(const list_t *h);
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
