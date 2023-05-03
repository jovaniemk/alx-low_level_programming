#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Double pointer to the head of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	lisint_t *now, *t;

	if (!h || !*h)
		return (c);
	now = *h;
	while (now)
	{
		c++;
		t = now;
		now = now->next;
		free(t);
		if (t <= now)
		{
			*h = NULL;
			exit(98);
		}
	}
	*h = NULL;
	return (c);
}
