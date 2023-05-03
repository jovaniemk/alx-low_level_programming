#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: Pointer to the head node of the list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head;
	listint_t *high = head;

	while (high != NULL && high->next != NULL)
	{
		low = low->next;
		high = high->next->next;

		if (low == high)
		{
			low = head;
			while (low != high)
			{
				low = low->next;
				high = high->next;
			}
			return (low);
		}
	}
	return (NULL);
}
