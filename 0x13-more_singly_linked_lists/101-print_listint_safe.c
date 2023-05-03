#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head node of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *list;
	size_t c = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		printf("[%p} %d\n", (void *)head, head->n);
		c++;
		list = head;
		head = head->next;

		if (list <= head)
		{
			printf("->[%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (c);
}
