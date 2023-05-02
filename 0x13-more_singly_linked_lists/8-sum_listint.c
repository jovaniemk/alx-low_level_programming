#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *now = head;

	while (now)
	{
		total += now->n;
		now = now->next;
	}
	return (total);
}
