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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
