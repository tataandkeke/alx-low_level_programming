#ifndef _LINK_LIST_
#define _LINK_LIST_

/**
 * struct list_s - signly linked list
 * @str: strinig - (malloced string)
 * @len: length of string
 * @next: points to next node
 * Description: signly linked list node structre
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif
