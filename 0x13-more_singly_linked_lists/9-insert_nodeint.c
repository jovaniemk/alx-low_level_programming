#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
/**
 * insert_nodeint_at_index - inserts a new node at a given position in a
 * listint_t linked list
 * @head: pointer to the head of the list
 * @idx: index where the new node should be added, starting from 0
 * @n: value to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new, *pre, *now;

	if (idx == 0)
		return (add_nodeint(head, n));
	pre = NULL;
	now = *head;
	for (j = 0; now && j < idx; j++)
	{
		pre = now;
		now = now->next;
	}
	if (j < idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = now;
	pre->next = new;
	return (new);
}
