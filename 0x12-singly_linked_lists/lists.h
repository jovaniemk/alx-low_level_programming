#ifndef LISTS_H
#define LISTS_H

/***
 * struct list_s - singly linked list
 * @str: string - (this is the malloc'ed string)
 * @len: is the length of the string
 * @next: this points to the next node
 * DESCRIPTION:
 * This is header file for the singly linked
 * list node structure project
 * an alx/holberton software engineering project
 */
typedef struct list_S
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
