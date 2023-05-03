#include "lists.h"

/**
 * reverse_listint - Function that reverese
 * @head: param1
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *next;

	if (!*head)
		return (0);
	for (; *head; *head = next)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
	}
	*head = pre;
	return (*head);
}
